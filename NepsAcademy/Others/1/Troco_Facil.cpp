#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n, one, five, ten, twenf, fifty, hund, total;
    cin >> n;
    hund = n/100;
    n -= (hund*100); 
    fifty = n/50;
    n -= (fifty*50);
    twenf = n/25;
    n -= (twenf*25);
    ten = n/10;
    n -= (ten*10);
    five = n/5;
    n -= (five*5);
    one = n;
    total = one + five + ten + twenf + fifty + hund;
    
    cout << total << endl;
    return 0;
}