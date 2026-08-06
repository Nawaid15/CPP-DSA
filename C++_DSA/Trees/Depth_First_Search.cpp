#include<iostream>
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

    void DFSPreOrder(Node* currentNode) {
        cout << currentNode->value << " ";
        if(currentNode->left) {
            DFSPreOrder(currentNode->left);
        }
        if(currentNode->right) {
            DFSPreOrder(currentNode->right);
        }
    }

    void DFSPreOrder() {
        DFSPreOrder(root);
    }

    void DFSPostOrder(Node* currentNode) {
        if(currentNode->left) {
            DFSPostOrder(currentNode->left);
        }
        if(currentNode->right) {
            DFSPostOrder(currentNode->right);
        }
        cout << currentNode->value << " ";
    }

    void DFSPostOrder() {
        DFSPostOrder(root);
    }

    void DFSInOrder(Node* currentNode) {
        if(currentNode->left) {
            DFSInOrder(currentNode->left);
        }
        cout << currentNode->value << " ";
        if(currentNode->right) {
            DFSInOrder(currentNode->right);
        }
    }

    void DFSInOrder() {
        DFSInOrder(root);
    }
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
    BST->DFSPreOrder();
    cout << endl;
    BST->DFSPostOrder();
    cout << endl;
    BST->DFSInOrder();
    cout << endl;
}