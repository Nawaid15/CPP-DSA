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

    void print_reverse() {
        Node* last = head;
        for(int j = 1; j < length; j++) {// j = 3; 3 < 3
            int i = 1;//i = 1
            Node* temp = head;
            while(i < length - j + 1) {// 2 < 2
                temp = temp->next;//temp = 2 
                i += 1;// i = 2
            }
            cout << temp->value << endl;//3 2 
            delete temp;
        }
        cout << last->value << endl;
    }

// head    tail
//  |       |
//  V       V
//          b
//  1-> 2-> 3-> nullptr
//              c     
//              a         
    void reverse() {
        Node* current = head;
        Node* after = head;
        Node* before = head;
        current = before->next;
        before->next = nullptr;
        int i = 1;
        while(i < length) { // i = 2, 2 < 3
            after = current->next;
            current->next = before;
            before = current;
            current = after;
            i++;// i = 2
        }
        tail = head;
        head = before; 
    }

        // current = before->next;
        // after = current->next; 
        // before->next = nullptr;
        // int i = 1;
        // while(i < length) {
        //     current->next = before;
        //     after->next = current;
        //     before = current;
        //     current = after;
        //     if(i == length - 1) break;
        //     after = after->next;
        //     i++;
        // }
        

    void getlength() {
        cout << this->length << endl;
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
    LinkedList* List = new LinkedList(1);
    List->append(2);
    List->append(3);
    List->append(4);
    List->append(5);
    List->printList();
    List->getlength();
    List->print_reverse();
    cout << "------------------Prnting List-------------------" << endl;
    List->printList();
    List->reverse();
    List->printList();
}