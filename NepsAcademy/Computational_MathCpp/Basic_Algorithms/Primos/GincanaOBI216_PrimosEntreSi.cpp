#include <iostream>
// Gincana (OBI 2016)
using namespace std;

typedef long long int LL;

LL mdc(LL a, LL b);
bool primosEntreSi(LL x, LL y);

int main(){
    LL n, m;
    cin >> n >> m;
    while(true){
        if(primosEntreSi(n, m)){
        cout << m << endl;
        break;
        }else{
        m--;
        }
    }
    return 0;
}

//MDC 
LL mdc(LL a, LL b){
    return (b == 0 ? a : mdc(b, a%b));
    // if b == 0, return a, else return mdc(b, a%b)
}
bool primosEntreSi(LL x, LL y){
    return mdc(x, y) == 1 ? true : false;
}