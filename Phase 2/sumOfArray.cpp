#include <iostream>
using namespace std;

int sumOfArray(int arr[],int n){
    if (n==0){
        return 0;
    }
    else if(n==1){
        return arr[0];
    }
    int rest = sumOfArray(arr + 1, n - 1);
    int ans = arr[0] + rest;
    return ans;
}

int main(){
    int arr[6] ={2,4,6,7,4,2};
    int n = 6;
    int ans = sumOfArray(arr,n);

    cout << ans << endl;
}