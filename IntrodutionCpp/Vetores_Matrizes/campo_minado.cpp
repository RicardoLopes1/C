#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;

    int v[n], w[n];
    for(int i=0; i<n; i++){
        w[i] = 0;
    }    

    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    

    for(int i=0; i<n; i++){
        if(v[i] > 0) w[i]++;
        if(i>0){
            if(v[i-1] > 0) w[i]++;
        }
        if(i<n-1){
            if(v[i+1] > 0) w[i]++;
        }
        
    }
    

    for(int i =0; i<n; i++){
        cout << w[i] << endl;
    }



    return 0;
}