#include <iostream>

using namespace std;

typedef long long int LL;

LL lsb(LL n);
int bitsSetOne(LL n);
    
int main(){
    LL n;
    int uns;

    cin >> n;
    uns = bitsSetOne(n);
    cout << uns << endl;
  
    return 0;
}

int bitsSetOne(LL n){
    if(n == 0) return 0;
    LL varlsb;
    int cont=0;

    for(int i=0; i<63; i++){
        varlsb = lsb(n);
        if(varlsb == 0)
            break;
        else{
            cont++;
            n -= varlsb;
        }
    }
    return cont;
}

LL lsb(LL n){
    return n == 0 ? 0 : (n & -n);
}

