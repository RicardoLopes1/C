#include <iostream>
#include <algorithm>
using namespace std;

struct Country{
	int id, ouro=0, prata=0, bronze=0;
};


int func(Country a, Country b);
	

int main(){
    int n, m, o, p, b;

    cin >> n >> m;
    Country v[n];

    for(int i=0; i<n; i++)
    	v[i].id = i+1;

	for(int i=0; i<m; i++){
		cin >> o >> p >> b;
		v[o-1].ouro++;
		v[p-1].prata++;
		v[b-1].bronze++;
	}    
    
    
    sort(v, v+n, func);

    for(int i=0; i<n; i++){
        cout << v[i].id << " ";
    }
    cout << endl;

    return 0;
    
}

int func(Country a, Country b){
	if(a.ouro != b.ouro)
		return a.ouro > b.ouro;
	else if(a.prata != b.prata)
		return a.prata > b.prata;
	else if(a.bronze != b.bronze)
		return a.bronze > b.bronze;

	return a.id < b.id; 
}

