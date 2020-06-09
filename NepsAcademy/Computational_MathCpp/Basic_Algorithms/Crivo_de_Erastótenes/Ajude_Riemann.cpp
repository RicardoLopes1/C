#include <iostream>
#include <vector>

using namespace std;

typedef long long int LL;

vector<bool> crivo(LL n);

int main(){
    LL n, j=0 ;
    vector<LL> n_primo;
    vector<bool> eh_primo;
    eh_primo = crivo(1000000);
    

    for(LL i=2; i<=n; i++){
        if(eh_primo[i]){
            n_primo.push_back(i); 
        }
            
    }
    
    cin >> n;
    cout << n_primo[n-1] << endl;

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