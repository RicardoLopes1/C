#include <iostream>
#include <string>
using namespace std;


int main(){
   	string s;
   	int tam, p=0, i=0, pi;
   	
   	cin >> s;
   	
   	tam = s.length(); //  s.size();
   	
   	if(tam == 1)
   		pi = 1;
   	else{
   		for(int k=tam-1; k>=0; k-=2)
   			i += int(s[k] - '0');

   		for(int j=tam-2; j>=0; j-=2)
   			p += int(s[j] - '0');

   		pi = p - i;
   	}

	if(pi%11 ==0) cout << "S\n";
   	else cout << "N\n";   	
   	
	return 0;
}


