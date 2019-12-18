#include <iostream>

using namespace std;

bool eh_primo(int x);
    

int main(){
    int x;

    cin >> x;

    if(eh_primo(x)){
        cout << "S" << "\n";
    }else{
        cout << "N" << "\n";
    }
}

bool eh_primo(int x){
    bool b = 0;
    int div = 0;

    for(int i=1; i<=x; i++){
        if(x%i == 0) div++;
    }
    if(div == 2) b = 1;

    return b;
}