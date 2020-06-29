#include <iostream>

using namespace std;

typedef long long int LL;

int main(){
    LL n, u, d;
    cin >> n;
    set<LL> pieces[n+1];

    for( int i =0; i<n; i++ ){
        cin >> d >> u;
        pieces[u].insert(d);
    }

    return 0;
}