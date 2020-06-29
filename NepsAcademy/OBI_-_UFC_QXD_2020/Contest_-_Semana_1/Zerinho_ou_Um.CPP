#include <bits/stdc++.h>

using namespace std;

typedef long long int LL;

int main(){
    int v[3];
    cin >> v[0] >> v[1] >> v[2];

    if(v[0] == v[1] && v[1] == v[2])
        cout << "*" << endl;
    else if(v[0] != v[1] && v[1] == v[2])
        cout << "A" << endl;
    else if(v[0] != v[1] && v[0] == v[2])
        cout << "B" << endl;
    else
        cout << "C" << endl;


    return 0;
}