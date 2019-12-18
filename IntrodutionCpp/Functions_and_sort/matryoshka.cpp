#include <iostream>
#include <algorithm>
using namespace std;
//1 2 3 5 4 6 7 5 8 1


int main(){
    int n, j=0;
    cin >> n;
    int v[n], w[n], z[n];

    for(int i=0; i<n; i++){
        cin >> v[i];
        w[i] = v[i];
    }
    
    sort(w, w+n);
    for(int i=0; i<n; i++){
        if(w[i] != v[i]){
            z[j] = v[i];
            j++;
        }
    }
    sort(z, z+j);
    
    cout << j << endl;

    if(j){
	    for(int i=0; i<j; i++){
	        cout << z[i] << " ";
	    }
	    cout << endl;
	}

    return 0;
    
}



