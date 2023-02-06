#include<iostream>
using namespace std;

int main(){

    int num = 5;
    int *ptr = &num;
    (*ptr)++;

    cout << num << endl;
    cout << &num << endl;
    cout << ++(*ptr)<< endl;

    int arr[4]={1,4,6,8};

    cout << "address of array " << arr << endl;
    cout << "address of array " << &arr[0] << endl;
    cout << *arr + 1 << endl;
    cout << *(arr + 1) << endl;
    cout << *(arr) + 1 << endl;
    cout << "address of next array's block " << &arr[1] << endl;

    int i = 2;
    cout << i[arr] << endl;



    return 0;

}