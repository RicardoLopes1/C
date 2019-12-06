#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, i, b= -1,cont=0;

    cin >> n;
    for(n; n>0; n--){
        cin >> i;
        if(i == 1){
            b = 1;
            continue;
        }
        if(b == 1){
            b = 0;
            continue;

        }
        if(i==0 and b==0){
            cont++;
            i = -1;
            b= -1;
        }

    }

    cout << cont << endl;
    


    return 0;
}