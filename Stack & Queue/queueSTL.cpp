#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<int> q;

    q.push(12);
    q.push(21);
    q.push(38);
    q.push(47);

    cout << q.front() << endl;
    cout << q.back() << endl;

    q.pop();
    cout << q.front() << endl;


    if(q.empty()){
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue has some values" << endl;
    }

    return 0;
}