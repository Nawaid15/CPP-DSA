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
    LinkedList(int value) {
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
        length = 1;
    }

    void printList(){
        Node* temp;
        temp = head;
        while(temp != nullptr) {
            cout << temp->value << endl;
            temp = temp->next;
        } 
    }

};

int main() {
    int x;
    LinkedList* List = new LinkedList(1);
    List->printList();
}