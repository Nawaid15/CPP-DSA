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

    bool insert(Node*& newNode,int value) {
        if(newNode == nullptr) {
            newNode = new Node(value);
            return true;
        }   
        else if(newNode->value < value) {
            return insert(newNode->right,value);
        }
        else if(newNode->value > value) {
            return insert(newNode->left,value);
        }
        cout << "Already have value " << value << endl;
        return false;
    }

    bool insert(int value) {
        if(root == nullptr) {
            Node* newNode = new Node(value);
            root = newNode;
            return true;
        }
        return insert(root,value);
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
    rBST->insert(1);
    rBST->insert(2);
    rBST->insert(3);
    rBST->insert(4);
    rBST->insert(5);
    rBST->insert(6);
    cout << rBST->root->right->value << endl;
    cout << rBST->root->right->right->value << endl;
    cout << rBST->contains(1) << endl;
}