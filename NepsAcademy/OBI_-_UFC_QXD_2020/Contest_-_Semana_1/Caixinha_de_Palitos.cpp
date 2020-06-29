#include <bits/stdc++.h>

using namespace std;

typedef long long int LL;

int main(){
    int tam=3;
    LL n, m, vet[tam], val, qnt=0;
    cin >> n >> m;
    vet[0] = m;
    vet[1] = n-m;
    vet[2] = 0;
    while(vet[1]>m){ // ajustando valores
        vet[1]--;
        vet[2]++;
    }
    
    val = ((n/3)+(n%3));
    if(m >= val){
        for(int i=0; i<tam; i++){
            while(vet[(i+2) % 3] != m){
                vet[i]--;
                vet[(i+2) % 3]++;
                qnt++;
            }
        }
    }
    cout << qnt << endl;
    return 0;
}