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

class LinkedList {
private:
    Node* head;
    Node* tail;
    int length;

public:
    LinkedList() {
        length = 0;
    }

    LinkedList(int value) {
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
        length = 1;
    }

    void printList() {
        Node* temp = head;
        while(temp) {
            cout << temp->value << endl;
            temp = temp->next;
        }
    }

    void append(int value) {
        if(length == 0) {
            Node* newNode = new Node(value);
            head = newNode;
            tail = newNode;
        }
        else { 
            Node* newNode = new Node(value);
            tail->next = newNode;
            tail = newNode;
        }
        length++;
    }

    void deletelast() {
        if(length == 0) {
            cout << "LinkedList is Empty" << endl;
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
            Node* pre;
            while(temp != tail) {
                pre = temp;
                temp = temp->next;
            }
            tail = pre;
            pre->next = nullptr;
            delete temp;
            length--;
        }
    }

    void deletefirst() {
        if(length == 0) {
            cout << "LinkedList is Empty" << endl;
        }   

        else {
            Node* temp = head;
            delete temp;
            head = head->next;
            length--;
        }
    }

    void clear() {
        head = nullptr;
        tail = nullptr;
        length = 0;
    }
};

int main() {
    LinkedList* List = new LinkedList(0);
    List->append(1);
    List->append(2);
    List->append(3);
    List->append(4);
    List->printList();
    List->deletelast();
    List->printList();
    List->deletefirst();
    List->printList();
    List->clear();
    List->printList();
    List->deletefirst();
}