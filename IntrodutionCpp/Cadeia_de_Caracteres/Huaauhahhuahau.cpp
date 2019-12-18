#include <iostream>

using namespace std;


int main(){
    string risada, vogais = "";
    char r = 'S';
    
    cin >> risada;

    for(int i=0; i<risada.size(); i++){
        if(risada[i] == 'a' or risada[i] == 'e' or risada[i] == 'i' or risada[i] == 'o' or risada[i] == 'u' )
            vogais += risada[i];
    }
    for(int i = 0; i<vogais.size(); i++){
        if(vogais[i] != vogais[vogais.size() - i - 1]){
            r = 'N';
            break;
        }
    }

    cout << r << endl;
    

    return 0;
}