#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int n, aux=0, aux2=0, i=0, j=0;
    
    cin >> n;
    

    int m[n][n];
    int line[n], column[n];
    for(i=0; i<n; i++){
        line[i] = 0;
        column[i] = 0;
    }
    

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> m[i][j];
        }
    }
    
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            line[i] += m[i][j];
            column[i] += m[j][i];
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            aux2 = line[i] + column[j] - 2*m[i][j];
            if(aux < aux2) aux = aux2;
        }
        
    }


    cout << aux << endl;

    return 0;
}