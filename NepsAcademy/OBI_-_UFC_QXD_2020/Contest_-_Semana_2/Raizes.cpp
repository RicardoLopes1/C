#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    double x, z;

    cout.precision(4);
    cout.setf(ios::fixed);
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> x;
        z = sqrt(x);
        cout << z << endl;
    }

    
    return 0;
}   