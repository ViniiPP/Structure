// Mostrar a tabela ali de carros e altrar um deles para "vendido"

#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;


struct veiculo{
    string modelo;
    int ano;
    double valor;
    string status;

    void estoque(){
        if(status == "Estoque")
            status = "Vendido";
    }
};

bool ordena(const veiculo &c1, const veiculo &c2){
    return
        (c1.valor < c2.valor) ||
        (c1.valor == c2.valor && c1.ano < c2.ano) ||
        (c1.valor == c2.valor && c1.ano == c2.ano && c1.modelo < c2.modelo);
}
 
const int Ncarros = 5;
int main(){

    veiculo vet[Ncarros] = {
        {"Onix", 2023, 85000.00, "Estoque"},
        {"Focus", 2012, 35000.00, "Estoque"},
        {"Focus", 2016, 47000.00, "Estoque"},
        {"Onix", 2013, 38000.00, "Estoque"},
        {"Compass", 2023, 184900.00, "Estoque"},

    };

    vet[0].estoque(); //Trocar o "estoque" por "vendido" do índice 0 = onix. Se fizer dps do sort, ele vai para o primeiro carro da tabela

    sort(vet, vet+Ncarros, ordena); //ordeção

    // IMPRIME A TABELA
    for(int i=0; i < Ncarros; i++){  
        cout << setw(15) << setfill(' ') << left <<  vet[i].modelo << " "
            << setw(10) << left << vet[i].ano << " "
            << setw(10)  <<  right << fixed << setprecision(2) << vet[i].valor << " "
            << setw(15) << setfill(' ') << right << vet[i].status << " " << endl;  
    }

    // TROCAR VALOR DE ALGO
    cout << "Qual veiculo voce deseja alterar o valor? - Digite o indice\n";  
        int indice;            
        cin >> indice;
    cout << "Qual eh o novo valor deste veiculo?\n";
        cin >> vet[indice].valor;
    
    // IMPRIME DNV COM O VALOR ESCOLHIDO
    for(int i=0; i < Ncarros; i++){  
        cout << setw(15) << setfill(' ') << left <<  vet[i].modelo << " "
            << setw(10) << left << vet[i].ano << " "
            << setw(10)  <<  right << fixed << setprecision(2) << vet[i].valor << " "
            << setw(15) << setfill(' ') << right << vet[i].status << " " << endl;  
    }

    return 0;
}


