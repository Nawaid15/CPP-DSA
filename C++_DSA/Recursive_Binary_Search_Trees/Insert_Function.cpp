#include<iostream>
using namespace std;

class Node {
    public:
    Node* left;
    Node* right;
    int value;

    Node(int value) {
        this->value = value;
        left = nullptr;
        right = nullptr;
    }
};
                
class RTrees {
    public:
    Node* root;

    RTrees() {
        root = nullptr;
    }

    Node* insert(Node*& newNode,int value) {
        if(newNode == nullptr) {
            newNode = new Node(value);
            return newNode;
        }
        else if(newNode->value > value) {
            newNode->left = insert(newNode->left,value);
        }
        else if(newNode->value < value) {
            newNode->right = insert(newNode->right,value);
        }
        return newNode;
    }

    void insert(int value) {
        insert(root,value);
    }

    bool contains(Node* newNode,int value) {
        if(newNode == nullptr) return false;
        else if(newNode->value == value) return true;
        else if(newNode->value > value) return contains(newNode->left,value);
        return contains(newNode->right,value);
    }

    bool contains(int value) {  
        return contains(root,value);
    }
};

int main() {
    RTrees* rBST = new RTrees();
    rBST->insert(11);
    rBST->insert(21);
    rBST->insert(72);
    rBST->insert(65);
    rBST->insert(1);
    cout << rBST->root->right->right->left->value << endl;
    cout << rBST->contains(11) << endl;
    cout << rBST->contains(65) << endl;
}