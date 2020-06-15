#include <iostream>
#include <algorithm>

using namespace std;

typedef long long int LL;

int main(){
    LL n, res = 0, s = 0;
    
    cin >> n;
    LL vet[n];
    
    for(LL i=0; i<n; i++)
        cin >> vet[i];
    
    sort(vet, vet+n);
    
    for(int i=0; i != n-1; i++)
        s += vet[i];

    for(LL i = n-1; i > 1; i--){
        if(s > vet[i]){
            res = i + 1;
            break;
        }else
            s -= vet[i-1];
    }
    
    cout << res << endl;

    return 0;
}