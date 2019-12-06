#include <iostream>

using namespace std;

int main(){
    int n, v, w, p=0, p1=0;
    cin >> n;
    cin >> v;
    w = v;
    for(n; n >1; n--){
        cin >> v;
        if(v == w){
            p++; 
        }else{
            
            p = 0;
            w = v;

        }
        if(p1 < (p+1)){
                p1 = p+1;
        }
    }
    cout << p1 << endl;


    return 0;
}