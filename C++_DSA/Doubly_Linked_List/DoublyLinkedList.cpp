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

    ~DoublyLinkedList() {
        clear();
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
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        length++;
    }

    void deleteLast() {
        if(length == 0) {
            cout << "Doubly Linked List is Empty!" << endl;
        }
        else if(length == 1) {
            Node* temp = head;
            delete temp;
            head = nullptr;
            tail = nullptr;
            length--;
        }
        else {
            Node* temp = tail;
            tail = tail->prev;
            temp->prev = nullptr;
            tail->next = nullptr;
            delete temp;
            length--;
        }
    }

    void deleteFisrt() {
        if(length == 0) {
            cout << "Doubly Linked List is Empty!" << endl;
        }
        else if(length == 1) {
            Node* temp = head;
            delete temp;
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

    Node* get(int index) {
        if(index < 0 || index >= length) {
            cout << "Invalid Index!" << endl;
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

    bool set(int index, int value) {
        if(length == 0) {
            cout << "Doubly Linked List is Empty!" << endl;
            return false;    
        }
        else if(index < 0 || index >= length) {
            cout << "Invalid Index!" << endl;
            return false;
        }
        Node* temp = get(index);
        temp->value = value;
        return true;
    }

    bool insert(int index, int value) {
        if(index < 0 || index > length) {
            cout << "Invalid Index!" << endl;
            return false;
        }
        else if(index == 0) {
            prepend(value);
            return true;
        }
        else if(index == length) {
            append(value);
            return true;
        }
        Node* newNode = new Node(value);
        Node* temp = get(index);
        newNode->next = temp->prev->next;
        newNode->prev = temp->prev;
        temp->prev->next = newNode;
        temp->prev = newNode;
        length++;
        return true;
    }

    void deleteNode(int index) {
        if(index < 0 || index >= length) {
            cout << "Invalid Index!" << endl;
        }
        else if(index == 0) {
            deleteFisrt();
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

    void clear() {
        while(length > 0) {
            deleteLast();
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
    DLL->prepend(0);
    DLL->printList();
    DLL->deleteFisrt();
    DLL->printList();
    DLL->deleteLast();
    DLL->printList();
    DLL->append(3);
    DLL->append(4);
    DLL->append(5);
    DLL->printList();
    DLL->deleteNode(2);
    DLL->printList();
    DLL->set(1,10);
    DLL->printList();
    cout << DLL->getlength() << endl;
    DLL->insert(1,20);
    DLL->printList();
    cout << DLL->getlength() << endl;
    DLL->deleteNode(1);
    DLL->printList();
    cout << "-----------------------------" << endl;
    DLL->printList();
    DLL->deleteNode(1);
    cout << "-----------------------------" << endl;
    DLL->printList();
    DLL->insert(1,20);
    cout << "-----------------------------" << endl;
    DLL->printList();
    DLL->set(1,10);
    cout << "-----------------------------" << endl;
    DLL->printList();
    cout << "Head is at " << DLL->getHead()->value << endl;
    cout << "Tail is at " << DLL->getTail()->value << endl;
    cout << "Length is " << DLL->getlength() << endl;
    DLL->clear();
    cout << "-----------------------------" << endl;
    DLL->append(1);
    DLL->append(2);
    DLL->append(3);
    DLL->printList();
    cout << "Length is " << DLL->getlength() << endl;
    delete DLL;
    cout << DLL->getlength() << endl;
    DLL->printList();
}