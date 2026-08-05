#include<iostream>
#include<queue>
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
    queue<Node*> myQueue;

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

    void BFS() {
        myQueue.push(root);
        while(myQueue.size() > 0) {
            Node* currentNode = myQueue.front();
            cout << currentNode->value << " ";
            if(currentNode->left) {
                myQueue.push(currentNode->left);
            }   
            if(currentNode->right) {
                myQueue.push(currentNode->right);
            }
            myQueue.pop();
        }
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
    BST->BFS();
} 