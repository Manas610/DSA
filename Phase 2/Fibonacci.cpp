#include <iostream>
using namespace std;

int Fib(int n){
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    return Fib(n-1) + Fib(n-2);
}

int main(){
    int n;
    cin >> n;

    cout << Fib(n);
}