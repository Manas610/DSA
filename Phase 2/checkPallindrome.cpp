#include<iostream>
using namespace std;

bool check(int first , string &str){
    int last = str.length() - first -1;
    if(first >= last)
        return 1;
    if(str[first]!=str[last]){
        return 0;
    }
    else{
         return check( first+1 , str);
    }
}

int main(){
    string name = "6016";
    int first = 0;
    bool isPalindrome = check(first , name);
    if(isPalindrome){
        cout << "it is palinrome";
    } else{
        cout << "it is not a palindrome";
    }
}