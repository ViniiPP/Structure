// PAR E IMPAR, pede um valor de entrada, e em seguida o user deve colocar o resto dos valores
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
using namespace std;

int T1(void const *a, void const *b )
{
    return (*(int*)a - *(int*)b );
}

int T2(void const *a, void const *b )
{
    return (*(int*)b - *(int*)a );
}

int main(){
    int n, i, num, par, impar;
    
    cin >> n;
    par = 0;
    impar = 0;
    int np[n];
    int ni[n];
    
    for(i = 0; i < n; i++){
        cin >> num;
        if(num%2 == 0){
            np[par] = num;
            par++;
        }else{
            ni[impar] = num;
            impar++;
        }
    }
    qsort(np, par, sizeof(int), T1);
    qsort(ni, impar, sizeof(int), T2);
    
    cout << "valores" << endl;
    for(i = 0; i < par; i++){
        cout << np[i] << endl;
    }
    for(i = 0; i < impar; i++){
        cout << ni[i] << endl;
    }
    
    return 0;
}