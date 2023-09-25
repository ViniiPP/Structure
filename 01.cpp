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
    
    aluno fulano, ciclano;  // Declaramos a variavel do tipo aluno, com 2 variáveis novas "ful.. Cicl.."

    //Inserimos os dados na structure
    fulano.matricula = 198561;
    fulano.nome = "Vinicius";
    fulano.nota = 9.5;

    //Exibit os dados
    cout << "Nome: " << fulano.nome << endl
        << "Matricula: " << fulano.matricula << endl
        << "Nota: " << fulano.nota << endl << endl;

    ciclano.matricula = 198562;
    ciclano.nome = "Pedro";
    ciclano.nota = 9.5;

    //Exibit os dados
     cout << "Nome: " << ciclano.nome << endl
        << "Matricula: " << ciclano.matricula << endl
        << "Nota: " << ciclano.nota << endl;
        
    return 0;
}