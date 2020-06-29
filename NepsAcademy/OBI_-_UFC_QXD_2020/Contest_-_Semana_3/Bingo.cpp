#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;
typedef long double ld;

#define len(x) (int)x.size()
#define loop(start, end, i) for (int i = start; i < end; i++)
#define loopi(start, end, i) for (int i = start; i > end; i--)
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

typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;


int main(){
    vi v;
    loop(0, 10, i){
        v.pb(i);
    }
    loop(0, 10, i){
        cout << v.at(i) << " ";
    }
    cout << endl;
    loopi(9, -1, i) cout << v.at(i) << " ";
    cout << endl;
    return 0;

}