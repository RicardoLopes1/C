#include <bits/stdc++.h>

using namespace std;

typedef long long int LL;

int main(){
    int n, num, tam = 12;
    int v[tam], aux[tam];
    for(int j = 0; j < tam; j++){ v[j] = aux[j] = 0;}
    
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> num;
        v[num-1] += 1;
        aux[num-1] = v[num-1];
    }
    sort(aux, aux + tam);
    for(int i = 0; i < tam; i++){
        if(v[i] == aux[tam-1])
            cout << i+1 << " ";
    }
    cout << endl;
    return 0;
}