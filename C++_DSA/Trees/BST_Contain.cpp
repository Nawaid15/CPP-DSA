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
    bool insert(int value) {
        Node* newNode = new Node(value);
        if(root == nullptr) { 
            root = newNode;
            return true;
        }
        Node* temp = root;
        while(temp) {
            if(value < temp->value) {
                if(temp->left == nullptr) break;
                temp = temp->left;
            }
            else if(value > temp->value) {
                if(temp->right == nullptr) break;
                temp = temp->right;
            }
            else {
                cout << "Already have value " << value << endl;
                delete newNode;
                return false;
            }
        }
        if(value < temp->value) { 
            temp->left = newNode; 
            return true;
        }
        temp->right = newNode;
        return true;
    }

    bool contain(int value) {
        Node* temp = root;
        while(temp) {
            if(value < temp->value) {
                temp = temp->left;
            }
            else if(value > temp->value) {
                temp = temp->right;
            }
            else {
                cout << "Found " << value << endl;
                return true;
            }
        }
        cout << "Not Found " << value << endl;
        return false;
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
    BST->insert(18);
    BST->contain(91);
    BST->contain(18);
    cout << BST->root->left->left->value << endl;
}
