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
    Node* deleteNode(Node* newNode,int value) {
        if(newNode == nullptr) return nullptr;
        else if(newNode->value == value) {
            if(newNode->left == nullptr && newNode->right == nullptr) {
                delete newNode;
                return nullptr;
            }
            else if(newNode->right == nullptr) {
                Node* temp = newNode->left;
                delete newNode;
                return temp;
            }
            else if(newNode->left == nullptr) {
                Node* temp = newNode->right;
                delete newNode;
                return temp;
            }
            Node* temp = newNode;
            newNode = newNode->right;
            Node* pre;
            while(newNode) {
                pre = newNode;
                newNode = newNode->left;
            }
            temp->value = pre->value;
            temp->right = deleteNode(temp->right,pre->value);
            return temp;
        }
        else if(newNode->value > value) {
            newNode->left =  deleteNode(newNode->left,value);
            return newNode;
        }
        else if(newNode->value < value) {
            newNode->right = deleteNode(newNode->right,value);
            return newNode;
        }
        return nullptr;
    }

    void deleteNode(int value) {
        root = deleteNode(root,value);
    }
};

int main() {
    RTrees* rBST = new RTrees();
    rBST->insert(47);
    rBST->insert(21);
    rBST->insert(76);
    rBST->insert(18);
    rBST->insert(27);
    rBST->insert(52);
    rBST->insert(82);
    rBST->insert(25);
    rBST->insert(29);
    rBST->insert(24);
    rBST->insert(26);
    rBST->insert(28);
    rBST->insert(30);
    cout << rBST->root->right->right->value << endl;
    cout << rBST->contains(11) << endl;
    cout << rBST->contains(65) << endl;
    cout << rBST->contains(82) << endl; 
    rBST->deleteNode(82);
    cout << rBST->contains(82) << endl;
    cout <<rBST->root->left->right->right->right->value << endl;
    cout << rBST->root->value << endl;
    rBST->deleteNode(47);
    cout << rBST->root->value << endl;
    rBST->deleteNode(100);
}