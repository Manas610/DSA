#include <iostream>
using namespace std;

bool bSearch(int arr[],int s,int e, int key){
    if(s>e){
        return 0; 
    }
    int mid = s + (e - s) / 2;
    if(arr[mid] == key){
        return 1;
    } 
    else if(arr[mid] > key){
        return bSearch(arr,s,mid-1,key);
    }
    else{
        return bSearch(arr,mid+1,e,key);
    }
}

int main(){
    int arr[6] = {1,3,6,8,10,12};
    int s = 0;
    int e = 5;
    int key = 6;
    bool ans = bSearch(arr,s,e,key);

    if(ans){
        cout << "Elements Found" << endl;
    }
    else{
        cout << "Elements not found" << endl;
    }

}