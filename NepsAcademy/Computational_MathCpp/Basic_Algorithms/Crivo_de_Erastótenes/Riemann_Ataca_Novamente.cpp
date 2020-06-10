#include <iostream>
#include <vector>
#include <set>

using namespace std;

typedef long long int LL;

vector<bool> crivo(LL n);

int main(){
    LL q, n, k=0;
    vector<LL> n_primo;
    vector<bool> e_primo;
    vector<LL> os_primos;
    e_primo = crivo(13000000);
    
    for(LL i=2; i<=12000000; i++){
        if(e_primo[i]){
            n_primo.push_back(i); 
        }
    }
    
    cin >> q;
    for(LL j=0; j<q; j++){
        cin >> n;
        os_primos.push_back(n);
    }
    
    LL p;
    for(LL i = 0; i< q; i++){
        p = lower_bound(n_primo.begin(), n_primo.end(), os_primos[i]) - n_primo.begin();
        cout << p+1 << endl;
    }

    return 0;

}

vector<bool> crivo(LL n){
    vector<bool> eh_primo;
    eh_primo.resize(n+1, true);
    eh_primo[0] = eh_primo[1] = false;
    
    for(LL i = 2; i <= n/i; i++){
        if(eh_primo[i]){
            for(LL j = i+i; j<=n; j += i ){
                eh_primo[j] = false;
            }
        }
    }
    return eh_primo;

}