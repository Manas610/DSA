#include<iostream>
using namespace std;

int calcPow(int base,int pow){
    if(pow == 0){
        return 1;
    }
    if(pow == 1){
        return base;
    }
    if(pow % 2 == 0){
        return calcPow(base,pow/2)*calcPow(base,pow/2);
    }
    else{
        return base*calcPow(base,pow/2)*calcPow(base,pow/2);
    }
}

int main(){
    int a , b;
    cout << "Enter Base Number" << endl;
    cin >> a;
    cout << "Enter Power Number" << endl;
    cin >> b;
    cout << "Answer is "<< calcPow(a,b);
}