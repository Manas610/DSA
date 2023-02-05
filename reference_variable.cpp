#include <iostream>
using namespace std;

void update2(int &n){
    n++;
}

void update1(int n){
    n++;
}

int main(){

    // int i = 5;
    // // created a reference variable
    // int &j = i;

    // cout << j << endl;
    // i++;
    // cout << i << endl;
    // j++;
    // cout << i << endl;

    int n = 5;
    cout << "before " << n << endl;
    update1(n);
    cout << "after1 " << n << endl;
    update2(n);
    cout << "after2 " << n << endl;

}