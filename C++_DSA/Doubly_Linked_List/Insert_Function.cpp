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
            Node* temp = tail;
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

    void insert(int index, int value) {
        if(index < 0 || index > length) {
            cout << "Invalid Index" << endl;
        }
        else if(index == 0) {
            prepend(value);
        }
        else if(index == length) {
            append(value);
        }
        else {
            Node* newNode = new Node(value);
            Node* temp = get(index);
            newNode->next = temp;
            temp->prev->next = newNode;
            newNode->prev = temp->prev;
            temp->prev = newNode;
            length++;
        }
    }

//            head                        tail
//              |                           |
//              V                           V
//                          <-n->
//                 ->     ->     ->     ->    ->  nullptr
//              1      2      3      4      5
//                            t
// nullptr  <-     <-     <-     <-     <-     
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
    DLL->insert(1,4);
    DLL->printList();
    cout << "The length is " << DLL->getlength() << endl;
    cout << "The tail is at " << DLL->getTail()->value << endl;
    DLL->insert(4,5);
    DLL->printList();
}