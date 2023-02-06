#include <iostream>
using namespace std;

//from the rightmost element creating the default value -> Default Argument
void print(int arr[], int n ,int start = 0 ){

    for(int i = start; i<n; i++){
        cout << arr[i] << endl;
    }
}

int main(){

    int arr[5] = {7,3,5,7,9};

    print(arr ,5 );

}