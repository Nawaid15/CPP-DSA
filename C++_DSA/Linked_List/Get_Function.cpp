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

    Node* get(int index) {
        if(index <= 0 || index > length + 1) {
            cout << "Invalid Index" << endl;
            return nullptr;
        }
        Node* temp = head;
        int i = 1;
        while(i < index) {//5 < 5
            temp = temp->next;
            i++;//i = 5
        }
        return temp;
    }

    bool set(int index, int value) {
        if(index <= 0 || index > length){
            cout << "Invalid Index" << endl;
            return false;
        }
        else if(index == 1) {
            head->value = value;
            return true;
        }
        get(index)->value = value;
        return true;
    }

    void getlength() {
        cout << this->length << endl;
    }

    void printList() {
        Node* temp = head;
        while(temp != nullptr) {
            cout << temp->value << endl;
            temp = temp->next;
        }
    }
//       temp        tail
//        |           |
//        V           V
// head-> 1-> 2-> 3-> 4-> nullptr    
};

int main() {
    LinkedList* List = new LinkedList(1);
    List->append(2);
    List->append(3);
    List->printList();
    cout << List->get(2)->value << endl;
    List->set(1,10);
    cout << List->get(1)->value << endl;
    List->set(1,11);
    cout << List->get(1)->value << endl;
    cout << "Total length is ";
    List->getlength();
    cout << List->get(3)->value << endl;
    cout << "----------------printing list--------------" << endl;
    List->printList();
}   