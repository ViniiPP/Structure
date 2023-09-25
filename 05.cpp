// Sort com Datas

#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

struct Data{
    int dia;
    int mes;
    int ano;
};

bool ordena(const Data &d1, const Data &d2){
    return
    (d1.ano < d2.ano) ||
    (d1.ano == d2.ano && d1.mes < d2.mes) ||
    (d1.ano == d2.ano && d1.mes == d2.mes && d1.dia < d2.dia);

}

int main(){

    int n;
    cout << "Informe quantas datas voce quer: ";
    cin >> n;   // entrada do número de datas
    Data vet[n];

    cout << "Informe " << n << " Datas {dd/mm/aaaa}: \n"; // entrada das datas
    for(int i=0; i < n; i++){ 
        cin >> vet[i].dia >> vet[i].mes >> vet[i].ano;
    }

    sort(vet, vet+n, ordena);

    cout << "Datas " << endl;  // saída das datas
        for(int i=0; i < n; i++){ 
        cout << vet[i].dia << "/" << vet[i].mes << "/" << vet[i].ano << endl;
    }

    return 0;
}