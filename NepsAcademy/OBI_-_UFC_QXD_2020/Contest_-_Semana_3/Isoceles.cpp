#include <bits/stdc++.h>

using namespace std;

typedef long long int LL;

int main(){
    LL n, h = 1, hmax;
    cin >> n;
    LL blocos[n];
    for(int i = 0; i < n; i++){
        cin >> blocos[i];
    }
    for(int i = 0; i < n; i++){
        if(blocos[i] >= h && blocos[i+h-1] >= h-1 ){
            hmax = h;
            for(int j = 0; j < hmax; j++){
                
            }
        }
    }
    return 0;
}