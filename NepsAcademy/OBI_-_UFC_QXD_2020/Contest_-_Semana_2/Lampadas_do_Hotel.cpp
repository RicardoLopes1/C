#include <iostream>

using namespace std;

int main(){
    int ia, ib, fa, fb, qnt=0;
    
    cin >> ia >> ib >> fa >> fb;

    while(ia != fa || ib != fb){
        if(ia != fa && ib != fb){ // C2
            ia ^= 1;
            ib ^= 1;
            qnt++;
        }
        else if(ia != fa){ // C1
            ia ^= 1;
            qnt++;
        }
        else{ // C2
            ia ^= 1;
            ib ^= 1;
            qnt++;
        } 
    }
    cout << qnt << endl;
    
    return 0;
}