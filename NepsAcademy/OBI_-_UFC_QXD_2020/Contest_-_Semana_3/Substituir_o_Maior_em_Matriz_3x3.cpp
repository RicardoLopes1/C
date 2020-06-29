#include <bits/stdc++.h>

using namespace std;

int main(){
    int mat[3][3], aux[9];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> mat[i][j];
            aux[(i*3)+j] = mat[i][j];
        }
    }
    sort(aux, aux+9);
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(mat[i][j] == aux[8])
                cout << "-1" << " ";
            else
                cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}