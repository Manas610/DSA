#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }
    ~Node(){
        int value = this -> data;
        if(this -> next !=NULL){
            delete next;
            this -> next = NULL;
        }
        cout << "The Value Deleted is " << value << endl;
    }
};

void insertNode(Node* &tail,int element,int d){
    if (tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        temp -> next = temp;

    }
    else{

        Node* curr = tail;
        while (curr -> data != element){
            curr = curr -> next;
        }
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

void deleteNode(Node* &tail,int d){
    if(tail == NULL){
        cout << "The list is empty" << endl;
        return;
    }

    Node* prev = tail;
    Node* curr = prev -> next;


    while (curr -> data != d){
        prev = curr;
        curr = curr -> next;
    }

    prev -> next = curr -> next;
    if(curr == prev){
        tail = NULL;
    }

    if(tail == curr){
        tail = prev;
    }
    curr -> next = NULL;
    delete curr;
}

void print(Node* tail){
    Node* temp = tail;

    if(tail == NULL){
        cout << "The list is empty" << endl;
        return;
    }

    do{
        cout << tail -> data << " ";
        tail = tail -> next;
    } while (tail != temp);
    cout << endl;
}

int main(){

    Node* tail = NULL;
    insertNode(tail ,5 ,12);
    print(tail);

    insertNode(tail ,12 ,22);
    print(tail);

    insertNode(tail ,12 ,21);
    print(tail);

    deleteNode(tail ,12);
    print(tail);

}