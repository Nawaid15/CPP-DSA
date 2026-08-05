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

class Queue {
private:
    Node* first;
    Node* last;
    int length;

public:
    Queue(int value) {
        Node* newNode = new Node(value);
        first = newNode;
        last = newNode;
        length = 1;
    }

    void Enqueue(int value) {
        Node* newNode = new Node(value);
        if(length == 0) {
            first = newNode;
            last = newNode;
        }
        else { 
            last->next = newNode;
            last = newNode;
        }
        length++;
    }

    void printQueue() {
        Node* temp = first;
        while(temp) {
            cout << temp->value << endl;
            temp = temp->next;
        }
    }
};

int main() {
    Queue* Q = new Queue(1);
    Q->Enqueue(2);
    Q->Enqueue(3);
    Q->printQueue();
}