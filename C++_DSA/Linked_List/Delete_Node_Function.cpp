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

    ~LinkedList() {
        clear();
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

    void deleteNode(int index) {
        if(index > length || index <= 0) {
            cout << "Invalid Index" << endl;
        }
        else if(length == 1) {
            Node* temp = head;
            delete temp;
            head = nullptr;
            tail  = nullptr;
            length--;
        }
        else {
            if(index == 1) {
                Node* temp = head;
                head = head->next;
                delete temp;
            }
            else if(index == length) {
                Node* temp = head;
                Node* pre = head; 
                while(temp != tail) {
                    pre = temp;
                    temp = temp->next;
                }
                tail = pre;
                tail->next = nullptr;
                delete temp;
            }
            // head    tail
            //  |       |
            //  V       V
            //  1-> 2-> 3-> nullptr
            else {  
                Node* temp = head;
                Node* pre = head;
                Node* ahead = head;
                int i = 1;
                while(i < index) {
                    pre = temp;
                    temp = temp->next;
                    ahead = temp->next;
                    i += 1;
                }
                pre->next = ahead;
                delete temp;
            }
            length--;
        }
    }
//                   tail
//                    |
//                    V
// head-> 1-> 2-> 3-> 4-> nullptr

    
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
        Node* temp = head;
        Node* pre = head;
        while(temp) {
            pre = temp;
            temp = temp->next;
            delete pre;
        }
        head = nullptr;
        tail = nullptr;
        length = 0;
    }   
};

int main() {
    LinkedList* List = new LinkedList(1);
    List->append(2);
    List->append(3);
    List->printList();
    cout << List->get(2)->value << endl;
    // List->clear();
    // List->printList();
    cout << "The length is "; 
    List->getlength();
    List->deleteNode(2);
    List->printList();
    cout << "The length is ";
    List->getlength();
    cout << List->get(2)->value << endl;
    cout << "----------Emptying The LinkedList-----------" << endl;
    List->clear();
    cout << "Now, the length of the LinkedList is ";
    List->getlength();
    cout << "Emptied LinkedList !!!" << endl;
    List->printList();
}