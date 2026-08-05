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
    int length;
    Node* head;
    Node* tail;

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

    void printList() {
        Node* temp;
        temp = head;
        while(temp != nullptr) {
            cout << temp->value << endl;
            temp = temp->next;
        }
    }

    ~LinkedList() {
        Node* temp = head;
        while(head) {
            head = head->next;
            delete temp;
            temp = head;        
        }
    }

    void deletelast() {
        if(length == 1) {
            head = nullptr;
            tail = nullptr;
            length--;
        }

        else if(length == 0) {
            cout << "Empty Linked List!";
        }
        
        else {
            Node* temp = head;
            Node* pre = head;
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
};

int main() {
    LinkedList* List = new LinkedList(1);
    List->append(2);
    List->append(3);
    List->printList();
    List->deletelast();
    List->printList();
}

//                   tail
//                    |
//                    V
// head-> 1-> 2-> 3-> 4-> nullptr
