#include <iostream>
using namespace std;

int ascToInt(char c){
    return c - '0';
}
char intToAsc(int n){
    return n + '0';
}

int main(){
    string cpf, checker;
    int x = 0, y = 0;
    bool aux = false;

    do{
        cout << "Digite os 11 dígitos do CPF para a verificação.\n";
        cout << "Sem pontos e sem traços.\n";
        cin >> cpf ;

        if(cpf.size() > 11){
            aux = true;
            cout << "\nFATAL-ERROR-\n\n";
        }
        else aux = false;
    }while(aux);
    
    checker = cpf;
    
    cout << "O CPF digitado foi: ";
    cout << cpf[0] << cpf[1] << cpf[2] << ".";
    cout << cpf[3] << cpf[4] << cpf[5] << ".";
    cout << cpf[6] << cpf[7] << cpf[8] << "-";
    cout << cpf[9] << cpf[10] << endl;
    
    for(int i=8; i>=0; i--){
        x = x + (ascToInt(cpf[i]) * (10-i));
    }
    x = x%11;
    if(x<2)
        x = 0;
    else
        x = 11 - x;

    for (int i = 9; i>=0; i--){
        y = y + (ascToInt(cpf[i]) * (11-i) );
    }
    y = y%11;
    if(y<2)
        y = 0;
    else
        y = 11 - y;

    checker[9] = intToAsc(x);
    checker[10] = intToAsc(y);

    if(cpf == checker) 
        cout << "CPF VÁLIDO!\n";
    else
        cout << "CPF FALSO!\n";
    
    return 0;
}