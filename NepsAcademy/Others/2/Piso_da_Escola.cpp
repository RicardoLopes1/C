#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll one, two;
    int l, c;
    cin >> l >> c;

    one = l*c + ((l-1)*(c-1));
    two = ((l-1)*2) + ((c-1)*2);

    cout << one << endl;
    cout << two << endl;
    return 0;
}