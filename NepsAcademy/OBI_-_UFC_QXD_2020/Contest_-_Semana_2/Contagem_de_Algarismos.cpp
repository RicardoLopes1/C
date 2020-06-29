#include <iostream>
#include <string>
using namespace std;


int main(){
    string s;
    int qnt, n, alg[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    
    cin >> qnt;

    for(int i=0; i<qnt; i++){
        cin >> n;
    
        s = to_string(n);
        for(int j=0; j<s.size(); j++){
            if(s[j] == '0')
                alg[0]++;
            else if(s[j] == '1')
                alg[1]++;
            else if(s[j] == '2')
                alg[2]++;
            else if(s[j] == '3')
                alg[3]++;
            else if(s[j] == '4')
                alg[4]++;
            else if(s[j] == '5')
                alg[5]++;
            else if(s[j] == '6')
                alg[6]++;
            else if(s[j] == '7')
                alg[7]++;
            else if(s[j] == '8')
                alg[8]++;
            else if(s[j] == '9')
                alg[9]++;
        }
    }
    
    for(int i=0; i<10; i++){
        cout << i << " - " << alg[i] << endl;
    }

    
    

    return 0;
}