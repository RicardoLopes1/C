#include <bits/stdc++.h>

using namespace std;

typedef long long int LL;
// 4 145 15 2 4999 3 3211 135 20
// 2 2 5 3 4
// 5 2 1 4 5 30 4 20 6 2 154

int main(){
    LL n;
    double d, c, dc;
    cin >> n;
    
    double vet[n], aux[n];

    for(int i = 0; i < n; i++){
        cin >> d >> c;
        dc = c*log(d);
        aux[i] = vet[i] = dc;
    }
    sort(aux, aux+n);

    for(int i = 0; i < n; i++){
        if(vet[i] == aux[n-1]){
            cout << i << endl;
            break;
        }
    }

    return 0;
}