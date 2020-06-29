#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, qnt = 0;
    vector<int> dir, esq;
    char c;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> m >> c;
        if(c == 'D'){
            dir.push_back(m);
        }else{
            esq.push_back(m);
        }
    }
    //sort(esq.begin(), esq.end());
    //sort(dir.begin(), dir.end());
    
    for(int i = 0; i < dir.size(); i++){
        for(int j = 0; j < esq.size(); j++){
            if(dir.at(i) == esq.at(j)){
                qnt++;
                esq.erase(esq.begin() + j);
                break;
            }
        }
    }
    cout << qnt << endl;
    return 0;
}