#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

// Criamos a nossa structure aluno
struct aluno{    //tipo de dado "aluno"
    int matricula;
    string nome;
    float nota;
    string status;

    // Criação de função na structure, troca de ausente para matriculado, quando chamada.
    void matricular(){
        if(status == "Ausente")
            status = "Matriculado";
    }
};

// Função de ordenação q vai ser usada pelo "SORT", vai puxar na ordem q escolhi > alfabética.
bool ordena(const aluno &a1, const aluno &a2){ 
    return a1.nome < a2.nome; // pode trocar .nome por .matricula, .nota... vc escolhe a ordenação
}

const int Nalunos = 5;  //tamanho do vetor, 5 alunos
int main(){

    //Declaramos um vetor de tamanho N, do tipo aluno e definimos seus valores
    aluno turma[Nalunos] = {
        {9091, "Vinii", 9, "Ausente"},  //vetor indice 1...
        {9092, "Pedro", 8, "Ausente"},
        {9093, "Joao", 7.15, "Ausente"},
        {9094, "Gael", 6.9, "Ausente"},
        {9095, "Paulo", 5.12, "Ausente"},
    };
   
   // matriculei o aluno do índice 2
    turma[3].matricular();

    // Ordenando = deixar organizado, usando a "bool" la de cima
    sort(turma, turma+Nalunos, ordena);

    for (int i=0; i < Nalunos; i++) { // imprimir
        cout << setw(8) << setfill('0') << turma[i].matricula << " " //setfill completa os espaços do setw com o valor escolhido "0", setw(8) coloca 8 valores 
        << setw(20) << setfill(' ') << left << turma[i].nome << " "  // left deixa a esquerda
        << setw(4) << right << fixed << setprecision(1) << turma[i].nota << " "  // right deixa na direita e usamos o setprecision para limitar as casas pos o ponto
        << setw(30) << setfill(' ') << left << turma[i].status << endl;
    }
    
    return 0;
}