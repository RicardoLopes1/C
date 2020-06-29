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
    int n, two = 0, three = 0, four = 0;
    cin >> n;
   	
    for(int i = 0; i < n; i++){
        cin >> s;
        if(divisibility(s, 2) % 2 == 0)
            two++;

        if(divisibility(s, 3) % 3 == 0)
            three++;

        if(divisibility(s, 4) % 4 == 0)
            four++;
    }
    cout << two << endl;
    cout << three << endl;
    cout << four << endl;
   	
	return 0;
}


