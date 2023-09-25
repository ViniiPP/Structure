#include <iostream>
#include <algorithm>
using namespace std;

int cmp(int a, int b) {
    return a > b;
}

int main() {
    int n, q;

    while (cin >> n >> q) {
        int vet[q];

        for (int i = 0; i < q; i++) {
            cin >> vet[i];
        }

        sort(vet, vet + q, cmp);

        for (int i = 0; i < q; i++) {
            cout << vet[i] << endl;
        }
    }

    return 0;
}
