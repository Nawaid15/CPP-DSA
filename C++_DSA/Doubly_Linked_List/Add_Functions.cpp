#include<iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;
    Node* prev;

    Node(int value) {
        this->value = value;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;
    int length;

public:
    DoublyLinkedList(int value) {
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
        length = 1;
    }

    void append(int value) {
        Node* newNode = new Node(value);
        if(length == 0) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        length++;
    }

    void prepend(int value) {
        Node* newNode = new Node(value);
        if(length == 0) {
            head = newNode;
            tail = newNode;
        }
        else {
            Node* temp = head;
            newNode->next = temp;
            temp->prev = newNode;
            head = newNode;
        }
        length++;
    }

    void printList() {
        Node* temp = head;
        while(temp) {
            cout << temp->value << endl;
            temp = temp->next;
        }
    }
};

int main() {
    DoublyLinkedList* DLL = new DoublyLinkedList(1);
    // DLL->append(2);
    DLL->printList();
    DLL->append(2);
    DLL->printList();
    DLL->prepend(0);
    DLL->printList();
}