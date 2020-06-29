#include <bits/stdc++.h>

using namespace std;

typedef long long int LL;

int main(){
    LL n, v;
    cin >> n;
    LL vet[n];

    for(int i = 0; i < n; i++){
        cin >> v;
        vet[i] = v;
    }
    int aux = 0, qnt = 1;
    for(int i = 0; i < n-1; i++){
        if(vet[i] == vet[i+1]){
            qnt++;
        }else{
            if(aux < qnt){
                aux = qnt;
            }
            qnt = 1;
        }
    }
    qnt = max(qnt, aux);
    cout << qnt << endl;

    return 0;
}