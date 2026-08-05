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

    int Dequeue() {
        if(length == 0) {
            cout << "Queue is Empty!" << endl;
            return INT_MIN;
        }
        else if(length == 1) {
            Node* temp = first;
            int dequeueditem = temp->value;
            first = nullptr;
            last = nullptr;
            delete temp;
            length = 0;
            return dequeueditem;
        }
        Node* temp = first;
        int dequeueditem = temp->value;
        first = first->next;
        delete temp;
        length--;
        return dequeueditem;
    }

    int getlength() {
        return length;
    }

    Node* getFirst() {
        return first; 
    }

    Node* getLast() {
        return last;
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
    Q->Dequeue();
    Q->printQueue();
    Q->Enqueue(1);
    Q->printQueue();
    cout << Q->getlength() << endl;
}