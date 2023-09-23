#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

    //unordered map has O(1)
    //map has O(log n)

    unordered_map<string,int> um;

    //insertion

    //1
    pair<string , int> p = make_pair("hello" , 3);
    um.insert(p);

    //2
    pair<string , int> q("date",4);
    um.insert(q);

    //3
    um["hi"] = 5;

    //search
    cout << um["hello"] << endl;
    cout << um.at("date") << endl;
    cout << um["what"] << endl; // it will create entry for what
    // cout << um.at("what") << endl;

    //size
    cout << um.size() << endl;

    //erase
    um.erase("what");
    cout << um.size() << endl;


    //iterating : 1
    for(auto a:um){
        cout << a.first + " : ";
        cout << a.second << endl; 
    }

    //iterator
    unordered_map<string , int> :: iterator it = um.begin();

    while(it != um.end()){
        cout << it->first << " -> " << it->second << endl;
        it++;
    }


    return 0;
}