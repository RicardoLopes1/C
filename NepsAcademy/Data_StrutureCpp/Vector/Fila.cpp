#include <iostream>
#include <vector>

using namespace std;
int main(){
	vector<int> vet; // create vector
	vector<int> aux; // create aux vector
	int num, qnt, p; // iterators

	cin >> num;
	for(int i=0; i<num; i++){
		cin >> p;
		vet.push_back(p); // add the elements at the end of the vector
	}

	cin >> qnt;
	for(int i=0; i<qnt; i++){
		cin >> p;
		aux.push_back(p); // add the elements at the end of the aux vector
	}
	//vet.erase(vet.begin()+index) removes an element from the vector
	for(int j=0; j<qnt; j++){
		for(int i=0; i<num; i++){
			if(vet[i] == aux[j]){
				vet.erase(vet.begin()+i);
				break;
			} 
		}
	}

	for(int i=0; i<vet.size(); i++)
		cout << vet[i] << " ";
	cout << endl;

	return 0;
}