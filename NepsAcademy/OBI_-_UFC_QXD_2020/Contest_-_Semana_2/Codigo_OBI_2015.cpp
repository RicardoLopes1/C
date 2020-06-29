#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, aux = 0, qnt = 0;
    cin >> n;
    bool v[n];

    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i]){
            aux = 1;
        }else if(!v[i] && aux == 1){
            aux = 2;
        }else if(!v[i] && aux == 2){
            aux = 0;
            qnt++;
        }
    }
    cout << qnt << endl;   
    return 0;
}