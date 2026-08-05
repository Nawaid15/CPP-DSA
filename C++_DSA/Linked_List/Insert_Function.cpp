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
        if(index <= 0 || index > length) {
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

    void insert(int index, int value) {
        if(length == 0) {
            cout << "LinkedList is Empty" << endl;
        }
        else if(length == 1) {
            if(index > length + 1 || index <= 0) cout << "Invalid Index" << endl;
            else {
                Node* newNode = new Node(value);
                newNode->next = get(index);

                head = newNode;
                tail = get(1);
            }
        }
        // else if(index == 1)  {
        //     Node* newNode = new Node(value);
        //     newNode->next = get(1);
        //     head = newNode;
        // }
        // else if(index == length) {
        //     Node* newNode = new Node(value);
        //     tail->next = newNode;
        //     tail = newNode;
        // }
        else {
            Node* newNode = new Node(value);
            Node* pre = head;
            for(int i = 1; i < index - 1; i++) {// i = 3
                pre = pre->next;//pre = 3
            }
            Node* temp = get(index);
            pre->next = newNode;
            newNode->next = temp;
            tail = tail->next;
        }
        length++;
    }

    void printList() {
        Node* temp = head;
        while(temp) {
            cout << temp->value << endl;
            temp = temp->next;
        }
    }

    void getlength() {
        cout << this->length << endl;
    }

    void clear() {
        head = nullptr;
        tail = nullptr;
        length = 0;  
    }
};

int main() {
    LinkedList* List = new LinkedList(1);
    List->printList();
    // List->getlength();
    // List->append(2);
    // List->append(3);
    // List->printList();
    // List->getlength();
    // cout << List->get(3)->value << endl;
    // List->insert(2,10);
    // cout << "Length is ";
    // List->getlength();
    // cout << List->get(4)->value << endl;
    // cout << endl << "---------------Printing List---------------" << endl;
    List->insert(1,10);
    List->printList();
    cout << List->get(1)->value << endl;
    List->clear();
    List->printList();
}//1 10 10 10