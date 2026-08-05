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

    void prepend(int value) {
        Node* newNode = new Node(value);
        Node* temp = head;
        newNode->next = temp;
        delete temp;
        head = newNode;
        length++;
    }
};

int main() {
    LinkedList* List = new LinkedList(1);
    List->printList();
    List->prepend(0);
    List->printList();
}
//                   tail
//                    |
//                    V
// head-> 1-> 2-> 3-> 4-> nullptr
