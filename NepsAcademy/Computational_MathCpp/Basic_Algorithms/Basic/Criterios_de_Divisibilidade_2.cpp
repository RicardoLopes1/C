#include <iostream>
#include <string>
using namespace std;


int main(){
   	string s;
   	int tam, x, q=0, n=0;
   	
   	cin >> s;
   	
   	tam = s.length(); //  s.size();
   	if(tam > 1){
	   	x = int(s[tam-1] - '0') + int(s[tam-2] - '0')*10;
	   	q = int(s[tam-1] - '0') + int(s[tam-2] - '0')*10;
	}else{
		x = int(s[tam-1] - '0');
	   	q = int(s[tam-1] - '0');
	}

	for(int i=0; i<tam; i++){
		n += int(s[i] - '0');
   	}
	
   	
	if(q%4 ==0) cout << "S\n";
   	else cout << "N\n";   	

   	if(n%9 ==0) cout << "S\n";
   	else cout << "N\n";

   	if(x%25 ==0) cout << "S\n";
   	else cout << "N\n";
   	
	return 0;
}


