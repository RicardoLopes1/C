#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, d, r;
    cin >> a >> b >> c >> d;
    r = abs(a-b) - abs(c-d);
    r = abs(r);
    cout << r << endl;

    return 0;
}