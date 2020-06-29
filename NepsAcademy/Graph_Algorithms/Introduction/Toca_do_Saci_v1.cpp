#include <iostream>

using namespace std;

typedef long long int LL;
// tests
// 4 5 0 1 1 1 0 0 2 0 1 1 0 0 0 0 1 3 1 1 1 1
// 4 5 0 0 0 1 0 0 0 0 1 1 0 0 0 0 2 0 3 1 1 1
// 4 5 0 1 2 1 0 0 1 0 1 1 0 0 0 0 1 3 1 1 1 1


int main(){
    LL n, m, i, j, exitI, exitJ, arrow=1, qnt=1;
    cin >> n >> m;
    int mat[n][m];

    for( i=0 ; i<n ; i++ ){
        for( j=0; j<m; j++ ){
            cin >> mat[i][j];
            if( mat[i][j] == 3 ){
                exitI = i;
                exitJ = j;
            }
        }
    }
    //
    
    i = exitI;
    j = exitJ;
    mat[i][j] = 0;
    while( mat[i][j] != 2 ){
        
        if( arrow == 1 ){
            if( j<m-1 && mat[i][j+1] > 0){
                mat[i][j] = 0;
                qnt++;
                j++;
                continue;
            }else{
                arrow = 2;
            }
        }//
        if( arrow == 2 ){
            if( i>0 && mat[i-1][j] > 0 ){
                mat[i][j] = 0;
                qnt++;
                i--;
                continue;
            }else{
                arrow = 3;
            }
        }//
        if( arrow == 3 ){
            if( j>0 && mat[i][j-1] > 0 ){
                mat[i][j] = 0;
                qnt++;
                j--;
                continue;
            }else{
                arrow = 4;
            }
        }//
        if( arrow == 4 ){
            if( i<n-1 && mat[i+1][j] > 0 ){
                mat[i][j] = 0;
                qnt++;
                i++;
                continue;
            }else{
                arrow = 1;
            }
        }//
        
    }
    
    cout << qnt << endl;


    return 0;
}