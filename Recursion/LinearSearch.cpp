#include <iostream>
using namespace std;

void printcase(int arr[], int n){
    cout << "Size of array is " << n << endl;

    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    } cout << endl;
}

bool lSearch(int arr[],int n,int key){
    printcase (arr,n);
    if (n == 0){
        return 0;
    }
    else if(arr[0] == key){
        return 1; 
    }
    else {
        lSearch(arr + 1 , n - 1, key);
    }
}

int main(){

    int arr[6] = {1,3,5,7,9,0};
    int key = 6;
    int n = 6;
    bool ans = lSearch(arr,n,key);
    if(ans){
        cout << "element found" << endl;
    } 
    else{
        cout << "element not found" << endl;
    }

}