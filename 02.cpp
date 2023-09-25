#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

// Criamos a nossa structure aluno
struct aluno{    //tipo de dado "aluno"
    int matricula;
    string nome;
    float nota;
};

int main(){
    aluno fulano = {15000, "Vini", 8.3};  // Declarou todos os dados na linha

    fulano.matricula = 1010;  // Altera o valor
    cout << "Matricula com valor alterado: " << fulano.matricula << endl;

    return 0;
}