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
    
    void deleteFirst() {
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

    void deleteLast() {
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

    Node* get(int index) {
        if(index < 0 || index >= length) {
            cout << "Invalid Index" << endl;
            return nullptr;
        }
        else if(index <= length/2) {
            Node* temp = head;
            int i = 0;
            while(i < index) {
                temp = temp->next;
                i++;
            }
            return temp;
        }
        Node* temp = tail;
        int i = length-1;
        while(i > index) {
            temp = temp->prev;
            i--;
        }
        return temp;
    }

    void set(int index, int value) {
        if(length == 0) {
            cout << "Doubly Linked List is Empty!" << endl;
        }
        else if(index < 0 || index >= length) {
            cout << "Invalid Index" << endl;
        }
        else {
            Node* temp = get(index);
            temp->value = value;
        }
    }

    void deleteNode(int index) {
        if(index < 0 || index >= length) {
            cout << "Invalid Index" << endl;
        }
        else if(index == 0) {
            deleteFirst();
        }
        else if(index == length-1) {
            deleteLast();
        }
        else {
            Node* temp = get(index);
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            delete temp;
            length--; 
        }
    }   

    int getlength() {
        return length;
    }

    Node* getHead() {
        return head;
    }

    Node* getTail() {
        return tail; 
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
    DLL->deleteNode(1);
    DLL->printList();
}