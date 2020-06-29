#include <iostream>
#include <set>
using namespace std;

typedef long long int LL;
// testes
// 5 4 0 1 3 1 2 4 0 2 3 0 2 4
// 5 4 1 2 3 1 3 4 0 2 4 0 4 3

int main(){
    LL n, m, a, b;
    bool t, r;

    cin >> n >> m ;
    set<LL> edges[n+1];
    
    for(int i = 0; i < m; i++){
        cin >> t >> a >> b;
        if (t){
            edges[a].insert(b);
            edges[b].insert(a);
        }else{
            // 'method count': Search for element 'b' in set 'a'. If found returns 'true', else returns 'false'.
            r = edges[a].count(b); 
            cout << r << endl;
        }
    }
    return 0;
}

