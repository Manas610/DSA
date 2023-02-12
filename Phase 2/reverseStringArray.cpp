#include<iostream>
using namespace std;

//compiler error hai isi liye special character aa raha

void reverseStr(int first , int last , char *str){
    if(first >= last){
        return;
    }
    swap(str[first],str[last]);
    first++;
    last--;
    reverseStr(first ,last ,str);

}

int main(){
    char str[] = {'h','e','l','l','o'};
    int first = 0;
    int last = sizeof(str)/sizeof(str[0]);
    reverseStr(first , last -1 , str);
    cout << str;
}