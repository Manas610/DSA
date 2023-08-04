#include<iostream>
#include<queue>
using namespace std;

class  node{
    public:
        int data;
        node* left;
        node* right;

    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree (node* root){
    cout << "Enter The Data :" << endl;
    int data;
    cin >> data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout << "Enter data for the left node of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for the right node of " << data << endl;
    root->right = buildTree(root->right);
    return root;

};

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }

        else{
            cout << temp -> data << " ";
            if(temp -> left){
                q.push(temp -> left);
            } 
            if(temp -> right){
                q.push(temp -> right);
            }     
        }
        
    }
};

void inorder(node* root){
    if(root == NULL){
        return ;
    }

    inorder(root -> left);
    cout << root -> data << " ";
    inorder(root -> right);
};

void preorder(node* root){
    if(root == NULL){
        return;
    }

    cout << root -> data << " ";
    preorder(root -> left);
    preorder(root -> right);
};

void postorder(node* root){
    if (root == NULL){
        return;
    }

    postorder(root -> left);
    postorder(root -> right);
    cout << root -> data << " ";
};

void buildFromLevelOrder(node* &root){
    queue<node*> q;
    cout << "Enter the data for root :" << endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout << "Enter the value of the node left to " << temp -> data << endl;
        int leftNode;
        cin >> leftNode;

        if(leftNode != -1){
            temp -> left = new node(leftNode);
            q.push(temp -> left);
        }

        cout << "Enter the value of the node right to " << temp -> data << endl;
        int rightNode;
        cin >> rightNode;

        if(rightNode != -1){
            temp -> right = new node(rightNode);
            q.push(temp -> right);
        }
     }

};



int main() {

    node* root = NULL;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root = buildTree(root);
    // cout << "Printing The Level Order Traversal" << endl;
    levelOrderTraversal(root);
    cout << "Inorder: " << endl;
    inorder(root);
    cout << endl << "Preorder: " << endl;
    preorder(root);
    cout << endl << "Postorder: " << endl;
    postorder(root);

    // buildFromLevelOrder(root);
    // levelOrderTraversal(root);

    return 0;
}