#include <iostream>

using namespace std;

int mdc(int a, int b);
int mmc(int a, int b);

int main(){
    int n, a, b, varmdc;

    cin >> n;
    cin >> a >> b;
    varmdc = mdc(a, b);
    for (int i = 2; i < n; i++){
        cin >> b;
        varmdc = mdc(varmdc, b);
    }
    
    cout << varmdc << endl;
    return 0;
}

//MDC 
int mdc(int a, int b){
    return (b == 0 ? a : mdc(b, a%b));
    // if b == 0, return a, else return mdc(b, a%b)
}
//MMC
int mmc(int a, int b){
    return (a/mdc(a, b)*b);
}