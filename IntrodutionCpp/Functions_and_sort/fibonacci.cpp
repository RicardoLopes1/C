#include <iostream>

using namespace std;

int fibonacci(int n);

int main(){

    int n;
    cin >> n;

    
    cout << fibonacci(n) << "\n";
}

int fibonacci(int n){
    int f = (n<=1) ? 1: fibonacci(n-1) + fibonacci(n-2);
    return f;

}