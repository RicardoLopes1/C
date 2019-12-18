#include <iostream>

using namespace std;

int main(){
    int n, i, a=0, b=0;
    cin >> n;

    for(n; n>0; n--){
    	cin >> i;
    	if(i == 1){
    		a ^= 1;
    	}else{
    		a ^= 1;
    		b ^= 1;
    	}
    }
    
    cout << a << endl;
    cout << b << endl;
    


    return 0;
}