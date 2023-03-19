#include<iostream>
#include<map>
using namespace std;

class Node{
    
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout << "Memory is free of value " << value << endl;
    }
};

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    } cout << endl;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d){
    if(position == 1){
        insertAtHead(head , d);
        return;
    }
    
    Node* temp = head;
    int count = 1;

    while(count < position-1){
        temp = temp -> next;
        count++;
    }

    if(temp -> next == NULL){
        insertAtTail(tail , d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

void deleteNode(int position,Node* &head,Node* &tail){
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;

        int count = 1;
        while(count < position){
            prev = curr;
            curr = curr -> next;
            count++;
        }
        if(curr -> next == NULL){
            tail = prev;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

bool detectNode (Node* head) {
    if (head == NULL){
        return false;
    }

    map <Node* , bool> visited;

    Node* temp = head;

    while (temp != NULL){
        if (visited[temp] == true){
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;
    }

    return false;

}

int main(){
    Node* node1 = new Node(25);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtHead(head , 10);
    print(head);

    insertAtHead(head , 15);
    print(head);

    insertAtTail(tail , 35);
    print(head);

    cout << detectNode(head) << endl;

    insertAtPosition(head, tail , 2 , 20);
    print(head);

    insertAtPosition(head, tail , 6 , 40);
    print(head);

    deleteNode(6, head,tail);
    print(head);

    cout << "Head -> "<< head -> data << endl;
    cout << "Tail -> "<< tail -> data << endl;

}