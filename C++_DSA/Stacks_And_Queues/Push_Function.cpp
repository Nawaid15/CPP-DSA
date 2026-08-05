#include<iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;

    Node(int value) {
        this->value = value;
        next = nullptr;
    }
};

class Stack {
private:
    Node* top;
    int height;

public:
    Stack(int value) {
        Node* newNode = new Node(value);
        top = newNode;
        height = 1;
    }

    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
        height++;
    }

    void printStack() {
        Node* temp = top;
        while(temp) {
            cout << top->value << endl;
            top = top->next;
        }
    }
};

int main() {
    Stack* S = new Stack(1);
    S->push(2);
    S->push(3);
    S->push(4);
    S->printStack();
}