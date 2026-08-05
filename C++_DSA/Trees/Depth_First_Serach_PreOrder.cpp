#include<iostream>
#include<stack>
using namespace std;

class Node {
    public:
    int value;
    Node* left;
    Node* right;

    Node(int value) {
        this->value = value;
        left = nullptr;
        right = nullptr;
    }
};

class BinarySearchTree {
    public:
    Node* root;
    
    BinarySearchTree() {
        root = nullptr;
    }
    
    void insert(Node*& newNode,int value) {
        if(newNode == nullptr) {
            newNode = new Node(value);
        }
        else if(newNode->value > value) {
            insert(newNode->left,value);
        }
        else if(newNode->value < value) {
            insert(newNode->right,value);
        }
        else {
            cout << "Already have value " << value << endl;
        } 
    }
    
    void insert(int value) {
        insert(root,value);
    }
    
    void DFS(Node*& currentNode) {
        stack<Node*> myStack;
        Node* pre = currentNode;
        myStack.push(currentNode);
        while(myStack.size() > 0) {
            while(true) {
                cout << pre->value << " ";
                if(currentNode->left) {
                    currentNode = currentNode->left;
                    myStack.push(currentNode);
                }
                if(pre->left == nullptr) break;
                pre = currentNode;
            }
            if(currentNode->right) {
                DFS(currentNode->right);
            }
            myStack.pop();
            if(myStack.size() > 0) {
                currentNode = myStack.top();
                //Node* alt = currentNode;
                if(currentNode->right) {
                    currentNode = currentNode->right;
                }
                pre = currentNode;
            }
        }
        return;
    }

    void DFS() {
        DFS(root);
    }
    //21 19  
};

int main() {
    BinarySearchTree* BST = new BinarySearchTree();
    BST->insert(30);
    BST->insert(21);
    BST->insert(33);
    BST->insert(19);
    BST->insert(23);
    BST->insert(32);
    BST->insert(35);
    BST->insert(20);
    BST->insert(22);
    BST->insert(25);
    BST->insert(24);
    BST->insert(26);
    BST->insert(28);
    cout << BST->root->left->right->right->right->right->value << endl;
    BST->DFS();
}