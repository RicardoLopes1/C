#include <bits/stdc++.h>

using namespace std;

typedef long long int LL;

int main(){
    double a, b, r;
    cin >> a >> b ;
    r = (a+b)/2;

    if(r>=7)
        cout << "Aprovado" << endl;
    else if(r>=4)
        cout << "Recuperacao" << endl;
    else 
        cout << "Reprovado" << endl;

    return 0;
}