#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

struct Crianca {
    string nome;
    char comp;
};

bool ordena(const Crianca &x, const Crianca &y){ // ordenacao em ordem alfabetica
    return(x.nome < y.nome);
}

int main(){

    int n;
    cin >> n;

    Crianca criancas[100]; //vetor com até 100 crianças
    int compBem = 0;
    int compMal = 0;

    for(int i=0; i < n; i++){
        cin >> criancas[i].comp >> criancas[i].nome;

        if(criancas[i].comp == '+'){
            compBem += 1;
        }
        else {
            compMal += 1;
        }
    }

    sort(criancas, criancas+n, ordena); // ordenacao

    for(int i=0; i < n; i++){  // imprime os nomes na tela
        cout << criancas[i].nome << endl;
    }

    cout << "Se comportaram: " << compBem << " | Nao se comportaram: " << compMal << endl;


    return 0;
}