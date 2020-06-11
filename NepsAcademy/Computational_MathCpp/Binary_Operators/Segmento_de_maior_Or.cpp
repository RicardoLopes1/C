#include <iostream>

using namespace std;

int main(){
    int n, k, res=0;
    cin >> n;

    for (int i=0; i<n; i++){
        cin >> k;
        res |= k;
    }
    cout << res << endl;
    
    return 0;
}