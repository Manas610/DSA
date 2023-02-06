#include <iostream>
using namespace std;

int getSum(int *p ,int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += p[i];
    }
    return sum;
}

int main(){

    int n;
    cin >> n;

    int *p = new int[n];

    for(int i=0; i<n;i++){
        cin >> p[i];
    }

    int sum = getSum(p , n);
    cout << "Sum is->" << sum << endl; 

}