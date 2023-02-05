#include <iostream>
using namespace std;

int main(){

    int i = 5;
    int *ptr = &i;
    cout <<"1->" << ptr << endl;
    cout <<"2->" << &ptr << endl;
    int **ptr2 = &ptr;
    cout <<"3->" << ptr2 << endl;
    cout <<"4->" << *ptr2 << endl;
    cout <<"5->" << **ptr2 << endl;

}