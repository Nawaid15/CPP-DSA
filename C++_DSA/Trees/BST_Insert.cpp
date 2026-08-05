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

    public:
    BinarySearchTree() {
        root = nullptr;
    }

    void check(int value, Node* temp, Node* newNode) {
        if(value < temp->value) {
            if(temp->left == nullptr) {
                temp->left = newNode;
                return;
            }
            else check(value, temp->left, newNode);
        }
        else if(value > temp->value) {
            if(temp->right == nullptr) {
                temp->right = newNode;
                return;
            }
            else check(value, temp->right, newNode);
        }
        else {
            cout << "Already have that value" << endl;
            return;
        }
    }

    bool insert(int value) {
        Node* newNode = new Node(value);
        if(root == nullptr) {
            root = newNode;
            return true;
        }                                                         
        Node* temp = root;
        if(value < temp->value) {
            if(temp->left == nullptr) {
                temp->left = newNode;
            }
            else check(value, temp->left, newNode);
            return true;
        }
        else if(value == temp->value) {
            cout << "Already have that value" << endl;
            return false;
        }
        else { 
            if(temp->right == nullptr) temp->right = newNode;
            else check(value, temp->right, newNode);
        }
        return true;
    }
};

int main() {
    BinarySearchTree* BST = new BinarySearchTree();
    BST->insert(27);
    BST->insert(18);
    BST->insert(52);
    BST->insert(12);
    BST->insert(19);
    BST->insert(72);
    BST->insert(91);
    cout << BST->root->left->right->value << endl;
}