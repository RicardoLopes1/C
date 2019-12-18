#include <iostream>

using namespace std;


int main(){
    int qnt, hit=0;
    string correto, resposta; 
    
    cin >> qnt >> correto >> resposta;

    for(int i=0; i<qnt; i++){
        if(correto[i] == resposta[i]) hit++;
    }
    
    cout << hit << endl;
    

    return 0;
}