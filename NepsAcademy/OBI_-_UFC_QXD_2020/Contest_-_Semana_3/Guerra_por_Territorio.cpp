#include <bits/stdc++.h>

using namespace std;

typedef long long int LL;

int main(){
    LL n, qnt = 0, aux = 0;
    cin >> n;
    int vet[n];
    for(int i = 0; i < n; i++){
        cin >> vet[i];
        qnt += vet[i];
    }
    qnt /= 2;
    int k = 0;

    while(aux != qnt){
        aux += vet[k];
        k++;
    }
    
    cout << k << endl;
    return 0;
}