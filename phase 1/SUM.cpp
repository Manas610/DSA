#include <iostream>
#include <array>
using namespace std;

int summ(int arr[],int n){
    int sum = 0;
    for (int i = 0; i<n;i++){
        sum = sum + arr[i]; 
    }
    return sum;
}
int main() {
    int e ;
    cout << "Enter The Number of elements" << endl;
    cin >> e ;
    int arr[100];
    for (int i = 0; i<e;i++){
        cout << "Enter the element in array" << endl;
        cin >> arr[i] ;
    }
    for (int i = 0; i<e;i++){
    cout << arr[i]<<" " ;
    }
    cout <<"SUM "<< summ(arr,e) << endl;
}