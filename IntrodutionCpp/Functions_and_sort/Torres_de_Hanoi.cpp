#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int n, i=1, t;

    cin >> n;
    if(n==0)return 0;
    cout << "Teste "<< i << endl;
    t = pow(2, n) -1 + 0.000000001 ;
    cout << t << endl;
    i++;
    
    while(1){

        cin >> n;
        if(n==0)break;
        
        cout << "Teste "<< i << endl;
        t = pow(2, n) -1 + 0.000000001 ;
        cout << t << endl;
        cout << endl;
        i++;
   
    }

    return 0;
    
}

