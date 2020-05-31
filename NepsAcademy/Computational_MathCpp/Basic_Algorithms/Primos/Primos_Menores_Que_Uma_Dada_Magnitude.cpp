#include <iostream>
#include <vector>

using namespace std;

bool eh_primo(int x);
vector<int> primos(int n);

int main(){
	int x;
	vector<int> tprimos;
    cin >> x;
    tprimos = primos(x);

    for (int i = 0; i < tprimos.size(); i++)
        cout << tprimos[i] << " ";
    cout << endl;
    
}

// eh_primo
bool eh_primo(int x){
	if(x == 1) return false;

	for (int i = 2; i <= x/i; i++){
		if (x % i == 0)
			return false;
	}
	return true;
}
//primos
vector<int> primos(int n){
    vector<int> tprimos;

    for (int i = 2; i <= n; i++){
        if (eh_primo(i))
            tprimos.push_back(i);
    }
    return tprimos;

}