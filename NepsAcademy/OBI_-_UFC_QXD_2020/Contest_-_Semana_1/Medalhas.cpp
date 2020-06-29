#include <bits/stdc++.h>

using namespace std;

typedef long long int LL;
// 230 183 234
int main(){
    int tam=3;
    int nadadores[tam], aux[tam];

    cin >> nadadores[0] >> nadadores[1] >> nadadores[2];
    aux[0]=nadadores[0];
    aux[1]=nadadores[1];
    aux[2]=nadadores[2];

    sort(aux, aux+tam);
    
    for(int i=0; i<tam; i++){
        for(int j=0; j<tam; j++){
            if(aux[i] == nadadores[j]){
                cout << j+1 << endl;
                break;
            }
        }
    }

    return 0;
}   