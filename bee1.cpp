// imprime pares e impares, primeiro os pares de forma crescente, e dps impares de forma decrescente na mesma coluna

#include <iostream>
#include <algorithm>
using namespace std;

const int maximo = 100;

int main() {
    int N;
    cin >> N;

    int numeros[maximo];
    int contPares = 0;
    int contImpares = 0;

    for (int i = 0; i < N; i++) {
        int numero;
        cin >> numero;
        numeros[i] = numero;

        if (numero % 2 == 0) {   // checa se é par
            contPares += 1;
        } 
        else {
            contImpares += 1;
        }
    }
    //ordenando os número impares e pares em forma crescente
    sort(numeros, numeros + N);

    // Imprime os números pares em ordem crescente
    for (int i = 0; i < N; i++) {
        if (numeros[i] % 2 == 0) {
            cout << numeros[i] << endl;
        }
    }

    // Imprime os números ímpares em ordem decrescente
    for (int i = N - 1; i >= 0; i--) {
        if (numeros[i] % 2 != 0) {
            cout << numeros[i] << endl;
        }
    }

    return 0;
}
