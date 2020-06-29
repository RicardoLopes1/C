#include <iostream>
#include <algorithm>

using namespace std;

typedef long long int LL;
//Testes
//5 7 1 3 2 1 3 2 3 4 4 5 3 5 2 5 3 5 1 3 1 2 3 2 1 2 2 1 0 0
int main(){
    LL a, voo, x, y, t=1;
    
    while(true){
        cin >> a >> voo;
        if(a == 0) break;
        LL aeroport[a];
        LL aux[a];

        for( LL i =0; i<a; i++ ){
            aeroport[i] = aux[i] = 0;
        }
        
        for(LL i = 0; i < voo; i++){
            cin >> x >> y;
            aeroport[x-1] += 1;
            aeroport[y-1] += 1;
            aux[x-1] = aeroport[x-1];
            aux[y-1] = aeroport[y-1];
            
        }
        sort(aux, aux+a);

        cout << "Teste " << t << endl;
        for( LL i=0; i<a; i++){
            if(aeroport[i] == aux[a-1])
                cout << i+1 << " ";
            
        }
        
        t++;
        cout << "\n" <<  endl;
    }
    return 0;
}