#include<iostream>
using namespace std;

void sortArray(int *arr , int n){
    if(n == 0 || n == 1){
        return ;
    }
    
    for(int i=0 ; i<n-1 ; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    sortArray(arr, n-1);
}

int main(){
    int arr[6]={6,4,8,3,0,5};
    int n = 6;
    sortArray(arr,6);
    for(int i=0; i<n ; i++){
        cout << arr[i] << " ";
    }
}