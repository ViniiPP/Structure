// Cai na prova

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

// Função de ordenação q vai ser usada pelo "SORT", vai puxar na ordem q escolhi > alfabética.
bool ordena(const aluno &a1, const aluno &a2){ 
    return a1.nome < a2.nome; // pode trocar .nome por .matricula, .nota... vc escolhe a ordenação
}

const int Nalunos = 5;  //tamanho do vetor, 5 alunos

int main(){

    //Declaramos um vetor de tamanho N, do tipo aluno e definimos seus valores
    aluno turma[Nalunos] = {
        {9091, "Vinii", 9},  //vetor indice 1...
        {9092, "Pedro", 8},
        {9093, "Joao", 7.15},
        {9094, "Gael", 6.9},
        {9095, "Paulo", 5.12},
    };
   
    // Ordenando = deixar organizado, usando a "bool" la de cima
    sort(turma, turma+Nalunos, ordena);

    for (int i=0; i < Nalunos; i++) { // Para mostrar todos os dados
        cout << setw(8) << setfill('0') << turma[i].matricula << " " //setfill completa os espaços do setw com o valor escolhido "0", setw(8) coloca 8 valores 
        << setw(30) << setfill(' ') << left << turma[i].nome << " "  // left deixa a esquerda
        << setw(4) << right << fixed << setprecision(1) << turma[i].nota << endl;  // right deixa na direita e usamos o setprecision para limitar as casas pos o ponto
    }
    
    return 0;
}