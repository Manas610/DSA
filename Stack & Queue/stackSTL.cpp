#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> s;

    s.push(4);
    s.push(22);
    s.push(12);
    s.pop();
    cout << s.top() << endl;

    if(s.empty()){
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    } 

    cout << "size of the stack is " << s.size() << endl;

    return 0;
}