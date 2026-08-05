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

    ~Stack() {
        clear();
    }
    
    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
        height++;
    }

    int pop() {
        if(height == 0) return INT_MIN;
        Node* temp = top;
        int poppeditem = temp->value;
        top = top->next;
        delete temp;
        height--;
        return poppeditem;
    }

    Node* getTop() {
        return top;
    }

    int getheight() {
        return height;
    }

    void clear() {
        while(height > 0) pop();
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
    S->pop();
    S->pop();
    cout << S->getheight();
    cout << S->getTop();
}