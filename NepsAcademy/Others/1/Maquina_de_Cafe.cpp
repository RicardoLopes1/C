#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll a, b, c, tam = 3, res;
    int vet[tam];
    cin >> vet[0] >> vet[1] >> vet[2];
    a = (vet[0]*4) + (vet[1]*2);
    b = (vet[2]*4) + (vet[1]*2);
    c = (vet[0]*2) + (vet[2]*2);
    res = min(a, min(b, c));
    
    cout << res << endl;
    return 0;
}