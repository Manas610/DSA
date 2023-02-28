#include <bits/stdc++.h> 
using namespace std;

int partition(vector<int>&arr, int low, int high)
{
    int pivot = arr[low];
    int count = 0;
    for(int i = low+1; i <= high; i++)
    {
        if(arr[i] <= pivot)
        count++;
    }
    //mil gyi pivot ki jagah count+low me
    //use sahi jagah rkh do
    int pivotInd = count + low;
    swap(arr[pivotInd], arr[low]);
    // ab left part me sare chote and right me sare bade
    int i = low, j = high;
    while(i < pivotInd && j> pivotInd)
    {
        while(arr[i] <= arr[pivotInd])
        i++;
        while(arr[j] > arr[pivotInd])
        j--;
        if(i < pivotInd && j > pivotInd)
        swap(arr[i++], arr[j--]);
    }
    return pivotInd;
}

void QuickSort(vector<int> &arr, int low, int high)
{   
    if(low >= high)
    {
        return;
    }
    //partition krde pehle
    int p = partition(arr, low, high);

    //index p mil gya ab krde left wale ko sort
    QuickSort(arr, low, p-1);
    //ab krde right part sort
    QuickSort(arr, p+1, high) ;

}
int main()
{
    vector<int> arr={1 ,1 ,1 ,1 ,2 ,2 ,2 ,2 ,4 ,4 ,2 ,2 ,2 ,4 ,4 ,4 ,4 ,4 ,4};
    QuickSort(arr, 0, arr.size()-1); 
    for(auto i: arr){
        cout<< i <<" ";
    }  

}

