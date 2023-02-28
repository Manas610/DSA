#include<iostream>
using namespace std;

void reverseStr(int first , string &str){
    int last = str.length() - first -1;
    if(first >= last){
        return;
    }
    swap(str[first],str[last]);
    first++;
    last--;
    reverseStr(first ,str);

}

int main(){
    string name = "Hello";
    int first = 0;
    reverseStr(first , name);
    cout << name << endl;
    return 0;
}