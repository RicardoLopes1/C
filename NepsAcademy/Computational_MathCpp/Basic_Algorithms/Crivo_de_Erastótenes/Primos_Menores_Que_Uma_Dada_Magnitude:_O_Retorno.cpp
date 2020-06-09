#include <iostream>
#include <vector>

using namespace std;

typedef long long int LL;

vector<bool> crivo(LL n);

int main(){
    LL n;
    vector<bool> eh_primo;
    cin >> n;
    eh_primo = crivo(n);

    for(LL i=0; i<=n; i++){
        if(eh_primo[i])
            cout << i << " ";
    }
    cout << endl;
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