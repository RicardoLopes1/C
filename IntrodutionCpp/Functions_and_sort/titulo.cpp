#include <iostream>

using namespace std;

string title(string);
    

int main(){ 
    string F;

    getline(cin, F);

    cout << title(F) << "\n";
}

string title(string F){
    string s;

    for(int i=0; i<F.size(); i++){
        if(i == 0 and F[i] > 96) 
            F[i] -= 32;
        else if(F[i-1] == ' ' and F[i] > 96) 
            F[i] -= 32; 
        else if(F[i] == ' ') 
            continue;
        else if(i !=0 and F[i] < 91 and F[i-1] != ' ') 
            F[i] += 32;
    }

    return F;
}