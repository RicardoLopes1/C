#include <iostream>

using namespace std;

int main(){
    int n, n2, m, a, t = 0;
    int b = 1;
    cin >> n;
    n2 = n;
    

    for(n; n>0; n--){
    	cin >> a;
    	t += a;
    	if(t>=1000000){
    		if(b){
    			m = n-1;
    			b = 0;
    		}

    	}
    }
    
    cout << n2-m << endl;
    


    return 0;
}