#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, i, aux =100;
    cin >> n;
    

    int v[n], w[n], A[n], B[n];
    

    for(i=0; i<n; i++){
        cin >> v[i];
    }
    

    for(int i=0; i<n; i++){
         if(v[i] ==0) aux =0;
         A[i] = aux;
         aux++;
    }
    aux=100;

    for( i=n-1; i>=0; i--){
         if(v[i] ==0) aux =0;
         B[i] = aux;
         aux++;
    }

    for(i=0; i<n; i++){
         if(A[i] <= B[i]) w[i] = A[i]; 
         else w[i] = B[i]; 

         if(w[i] >= 9) w[i] = 9;
         
    }


    for( i =0; i<n; i++){
        cout << w[i] << " ";
    }

    cout << endl;

    return 0;
}