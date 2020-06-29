#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, r;
    cin >> a >> b;
    r = a+b;

    if(r%2 == 0)
        cout << "Bino\n";
    else
        cout << "Cino\n";
        
    return 0;
}