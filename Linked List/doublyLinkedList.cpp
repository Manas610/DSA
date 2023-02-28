#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }
};

void print(Node* head){
    Node* temp = head;

    while(temp !=NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    } cout << endl;
}

int getLength(Node* head){
    int length = 0;
    Node* temp = head;

    while(temp !=NULL){
        length++;
        temp = temp -> next;
    } 
    return length;
}

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}

void insertAtPosition(Node* &tail,Node* &head, int position, int d){
    if(position == 1){
        insertAtHead(head,d);
        return;
    }

    Node* temp = head;
    int cnt=1;
    while(cnt < position){
        temp = temp -> next;
        cnt++;
    }
    if(temp -> next == NULL){
        insertAtTail(tail,d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    //cout << getLength(head) << endl;

    insertAtHead(head, 11);
    print(head);

    insertAtHead(head, 15);
    print(head);

    insertAtHead(head, 1);
    print(head);

    insertAtTail(tail, 12);
    print(head);

    insertAtTail(tail, 19);
    print(head);

    insertAtPosition(tail , head , 2 , 22);
    print(head);
    return 0;
}