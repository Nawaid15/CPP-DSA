#include<iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;
    Node* prev;

    Node(int value) {
        this->value = value;
        next = nullptr;
        prev = nullptr;
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

    void DeleteFirst() {
        if(length == 0) {
            cout << "Doubly Linked List is Empty!" << endl;
        }
        else if(length == 1) {
            head = nullptr;
            tail = nullptr;
            length--;
        }
        else {
            Node* temp = head;
            head = head->next;
            head->prev = nullptr;
            delete temp;
            length--;
        }
    }

    void DeleteLast() {
        if(length == 0) {
            cout << "Doubly Linked List is Empty!" << endl;
        }
        else if(length == 1) {
            head = nullptr;
            tail = nullptr;
            length--;
        }
        else {
            Node* temp = tail;
            tail = tail->prev;
            tail->next = nullptr;
            delete temp;
            length--;
        }
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
    DLL->append(2);
    DLL->append(3);
    DLL->printList();
    // DLL->DeleteFirst();
    // DLL->printList();
    // DLL->DeleteFirst();
    DLL->DeleteLast();
    DLL->printList();
    DLL->DeleteLast();
    DLL->printList();
    DLL->DeleteLast();
    DLL->printList();
    DLL->DeleteLast();
    DLL->printList();
    DLL->DeleteLast();
    DLL->printList();
}