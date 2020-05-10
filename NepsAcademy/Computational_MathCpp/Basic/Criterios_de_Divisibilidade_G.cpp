#include <iostream>
#include <string>
using namespace std;

int ascToInt(char c){
	return c - '0';
}

int divisibility(string s, int d){
	int res = 0, init = 1;

	for(int i=s.size()-1; i>=0; i--){
		res = res + ((ascToInt(s[i]) *1LL * init) % d);
		init = (init *1LL * 10) % d; // 1LL convert to long long int. Prevents overflow
	}
	return res;
}
// You can test for any other number, just change the correct parameter.
int main(){
   	string s;
   	
   	cin >> s;
   	// Here tests if it is divisible by 4
   	if(divisibility(s, 4) % 4 == 0)
	   cout << "S" << endl;
	else
		cout << "N" << endl;
	
	// Here tests if it is divisible by 9
	if(divisibility(s, 9) % 9 == 0)
	   cout << "S" << endl;
	else
		cout << "N" << endl;
	
	// You already understand, am i right? haha.
	if(divisibility(s, 25) % 25 == 0)
	   cout << "S" << endl;
	else
		cout << "N" << endl;
	
	return 0;
}


