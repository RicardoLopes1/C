#include <iostream>

using namespace std;

bool eh_primo(long long int x);

int main(){
	long long int x;
	cin >> x;

	if(eh_primo(x))
		cout << "S\n";
	else
		cout << "N\n";

}

bool eh_primo(long long int x){
	if(x == 1) return false;

	for (int i = 2; i < x/i; i++){
		if (x % i == 0)
			return false;
	}
	return true;
}