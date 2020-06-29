#include <iostream>
#include <vector>

using namespace std;

int main(){
    int m, n, carry=0, aux;
    vector<int> vet_out;
    cin >> m >> n;
    aux = max(m, n);
    vet_out.resize(aux);
    int x[aux], y[aux];

    for(int i=0; i<aux; i++){
        x[i] = 0;
        y[i] = 0;
    }

    for(int i=0; i<m; i++)
        cin >> x[i];

    for(int i=0; i<n; i++)
        cin >> y[i];

    for(int i=aux-1; i>=0; i--){
        vet_out[i] = x[i] + y[i] + carry;
        carry = 0;

        if(vet_out[i] == 2){
            carry = 1;
            vet_out[i] = 0;
        }else if(vet_out[i] == 3){
            carry = 1;
            vet_out[i] = 1;
        }
    }

    for(int i=aux-1; i>=0; i--){
    	if(vet_out[i] == 0)
    		aux -= 1;
    	else 
    		break;
    }
    //vet_out.resize(aux);
	if(carry == 1)
		cout << 1 << " ";    

    for(int i=0; i<aux; i++)
        cout << vet_out[i] << " ";

    cout << endl;

    return 0;    
}