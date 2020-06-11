#include <iostream>

using namespace std;

typedef long long int LL;

LL lsb(LL n);
bool filaDeUm(LL n);
    
int main(){
    LL n;

    cin >> n;
    if(filaDeUm(n))
        cout << 'S' << endl;
    else 
        cout << 'N' << endl;
  
    return 0;
}

bool filaDeUm(LL n){
    if(n == 1 || n == 0) return 0;
    LL k, m, varlsb;
    m = n;
    int cont=0;

    for(int i=0; i<63; i++){
        varlsb = lsb(m);
        if(varlsb == 0)
            break;
        else{
            cont++;
            m -= varlsb;
        }
    }
    if(cont == 63)
        return 1; // Se todos os bits forem 1
    
    k = n+1;
    return (k & n) == 0 ? 1 : 0;
    // se fila de um, retorna 1, C.C. 0.
}

LL lsb(LL n){
    return n == 0 ? 0 : (n & -n);
}

