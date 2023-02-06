#include <iostream>
using namespace std;

// #define GREAT(a,b) (a<b) ? b : a 
 
inline int GREAT(int a,int b){
    return ((a<b) ? b : a);
}

int main(){

    int a = 1;
    int b = 3;

    int greater = GREAT(a,b);
    cout << greater << endl;

    a = a + 4;
    b = b + 1;

    greater = GREAT(a,b);
    cout << greater << endl;

}