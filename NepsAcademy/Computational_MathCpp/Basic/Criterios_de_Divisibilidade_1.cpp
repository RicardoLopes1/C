#include <iostream>
#include <string>
using namespace std;


int main(){
   	string s;
   	int tam, x, t=0;

   	cin >> s;
   	
   	tam = s.length(); //  s.size();
   	x = int(s[tam-1] - '0');
   	
	for(int i=0; i<tam; i++)
   		t += int(s[i] - '0');
   	
	if(x%2 ==0) cout << "S\n";
   	else cout << "N\n";   	

   	if(t%3 ==0) cout << "S\n";
   	else cout << "N\n";

   	if(x%5 ==0) cout << "S\n";
   	else cout << "N\n";

	return 0;
}


