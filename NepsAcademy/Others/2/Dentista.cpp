#include <bits/stdc++.h>
using namespace std;

#define len(x) (int)x.size()
#define loop(init, end, i) for (int i = init; i < end; i++)
#define loopi(start, end, i) for (int i = init; i > end; i--)
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

typedef long long int ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;

// 10 20 25 20 28 30 40 40 50 50 60 60 70 70 80 80 90 10 20 100 110
// 3 10 30 12 15 15 20
int main(){
    ll n, x, y, qnt = 1;
    vll v;
    cin >> n;
    loop(0, n, i){
        cin >> x >> y;
        v.pb(mp(y, x));
    }
    sort(all(v));
    //loop(0, len(v), i) cout << v.at(i).F << " - " << v.at(i).S << endl;
    
    loop(0, len(v)-1, i){
        if(v.at(i).F <= v.at(i+1).S)
            qnt++;
        else{
            v.erase(v.begin()+i+1);
            i--;
        }
    }
    
    cout << qnt << endl;
    return 0;
}