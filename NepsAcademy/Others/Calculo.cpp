#include <iostream>

using namespace std;

int main(){
    int m, n, carry=0, aux;
    cin >> m >> n;
    if(m>n)
        aux = m;
    else
        aux = n;

    int x[aux], y[aux], saida[aux];

    for(int i=0; i<aux; i++){
        x[i] = 0;
        y[i] = 0;
    }

    for(int i=0; i<m; i++)
        cin >> x[i];

    for(int i=0; i<n; i++)
        cin >> y[i];

    for(int i=aux-1; i>=0; i--){
        saida[i] = x[i] + y[i] + carry;
        carry = 0;

        if(saida[i] == 2){
            carry = 1;
            saida[i] = 0;
        }else if(saida[i] == 3){
            carry = 1;
            saida[i] = 1;
        }
    }

    for(int i=aux-1; i>=0; i--){
    	if(saida[i] == 0)
    		aux -= 1;
    	else 
    		break;
    }

	if(carry == 1)
		cout << 1 << " ";    

    for(int i=0; i<aux; i++)
        cout << saida[i] << " ";

    cout << endl;

    return 0;    
}