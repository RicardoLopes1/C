#include <iostream>

using namespace std;

typedef long long int LL;
// tests
// 5 5 ..... ..#.. .###. ..#.. .....
// 10 10 .......... .....###.. ....#####. .#...##... .......... .......##. .##....... ..##...... ..###..... ..#####...

int main(){
    LL m, n, qnt=0; // m is lines.
    char c;
    cin >> m >> n;
    char mat[m][n];

    for( int i = 0; i<m ; i++ ){
        for( int j =0; j<n ; j++  ){
            cin >> c ;
            mat[i][j] = c;
        }
    }
    //counting on the edge lines
    for( int k = 0; k<n ; k++ ){
        if(mat[0][k] == '#'){
            qnt++;
        }
        if(mat[m-1][k] == '#'){
            qnt++;
        }
    }
    //counting on the edge columns
    for( int k = 1; k<m-1 ; k++ ){
        if(mat[k][0] == '#'){
            qnt++;
        }
        if(mat[k][n-1] == '#'){
            qnt++;
        }
    }
    // counting internal matrix
    for( int i = 1; i<m-1 ; i++ ){
        for( int j =1; j<n-1; j++  ){
            if(mat[i][j] == '#' && 
            (mat[i-1][j] == '.' || mat[i][j-1] == '.' || 
            mat[i+1][j] == '.' || mat[i][j+1] == '.') ){
                qnt++;
            }
            
        }
    }

    cout << qnt << endl;
    
    return 0;
}