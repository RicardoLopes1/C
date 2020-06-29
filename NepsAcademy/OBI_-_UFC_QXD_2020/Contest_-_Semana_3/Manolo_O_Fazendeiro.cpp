#include <bits/stdc++.h>

using namespace std;

typedef long long int LL;
// 5 1 2 3 4 5 6 7 8 9 10 1 2 3 4 5 5 4 3 2 1 4 8 10 5 7 2 1 2 3 4 3 3 4 5
int main(){
    LL n, carrots = 0;
    cin >> n;
    LL ground[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> ground[i][j];
        }
    }
    int q, li, lf, ci, cf;
    cin >> q;
    for(int k = 0; k < q; k++){
        cin >> li >> ci >> lf >> cf;
        for(int i = li-1; i < lf; i++){
            for(int j = ci-1; j < cf; j++){
                carrots += ground[i][j];
                ground[i][j] = 0;
            }
        }
    }
    cout << carrots << endl;
    return 0;
}