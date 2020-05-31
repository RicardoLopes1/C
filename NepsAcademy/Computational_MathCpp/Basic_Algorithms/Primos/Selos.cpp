#include <iostream>

using namespace std;

bool eh_primo(long long int x);

int main(){
	long long int x;
	cin >> x;
    //Selos
	if(eh_primo(x))
		cout << "N\n";
	else
		cout << "S\n";

}
//Selos: if(x == 1) return false altered to true.
bool eh_primo(long long int x){
	if(x == 1) return true; // to work correctly change to false

	for (int i = 2; i < x/i; i++){
		if (x % i == 0)
			return false;
	}
	return true;
}