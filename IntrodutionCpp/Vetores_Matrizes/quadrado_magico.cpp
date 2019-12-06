#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int n, aux=0, aux2=0, i, j;
    
    cin >> n;
    

    int m[n][n];
    

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> m[i][j];
        }
    }
    
    for(int i=0; i<n; i++){
        aux += m[0][i];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            aux2 += m[i][j];
        }
        if(aux2 != aux){
            aux = -1;
            break;
        }
        aux2 = 0;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            aux2 += m[j][i];
        }
        if(aux2 != aux){
            aux = -1;
            break;
        }
        aux2 = 0;
    }

    j=0;
    for(int i=0; i<n; i++){
        aux2 += m[i][j];
        j++;
    }
    if(aux2 != aux){
        aux = -1;
        
    }
    
    aux2 =0;
    j=0;
    for(int i=n-1; i>=0; i--){
        aux2 += m[i][j];
        j++;
    }
    if(aux2 != aux){
        aux = -1;
        
    }

    cout << aux << endl;

    return 0;
}