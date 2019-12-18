#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    double i;
    cout.precision(4);
    cout.setf(ios::fixed);

    cin >> n;
    for (n; n>0; n--){
        cin >> i;
        cout << sqrt(i) << endl;
    }


    return 0;
}