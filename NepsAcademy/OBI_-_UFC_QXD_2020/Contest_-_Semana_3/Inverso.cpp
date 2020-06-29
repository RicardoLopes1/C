#include <bits/stdc++.h>

using namespace std;

int main(){
    int tam = 10;
    int v[tam];

    for(int i = 0; i < tam; i++){
        cin >> v[i];
    }
    for(int i = tam-1; i >= 0; i--){
        cout << v[i] << endl;
    }
    return 0;
}