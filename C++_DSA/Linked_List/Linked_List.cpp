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

    ~LinkedList() {
        Node* temp = head;
        while(head) {
            head = head->next;
            delete temp;
            temp = head;        
        }
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

    void prepend(int value) {
        Node* newNode = new Node(value);
        Node* temp = head;
        newNode->next = temp;
        delete temp;
        head = newNode;
        length++;
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

    void print_reverse() {
        Node* last = head;
        for(int j = 1; j < length; j++) {// j = 3; 3 < 3
            int i = 1;//i = 1
            Node* temp = head;
            while(i < length - j + 1) {// 2 < 2
                temp = temp->next;//temp = 2 
                i += 1;// i = 2
            }
            cout << temp->value << " ";//3 2 
            delete temp;
        }
        cout << last->value << endl;
    }

    void bubbleSort() {
		for(int i = length-1; i > 0; i--) {
		    for(int j = 0; j < i; j++) {
		        if(getValue(j) > getValue(j+1)) {
		            int a = getValue(j);
		            int b = getValue(j+1);
		            getNode(j+1)->value = a;
		            getNode(j)->value = b;
		        }
		    }
		}
	}

    void selectionSort() {
        for(int i = 0; i < length; i++) {
            int minIndex = i;
            for(int j = i; j < length; j++) {
                if(getValue(minIndex) > getValue(j)) {
                    minIndex = j;
                }
            }
            int a = getValue(i);
            int b = getValue(minIndex);
            getNode(i)->value = b;
            getNode(minIndex)->value = a;
        }
    }

    void insertionSort() {
        for(int j = 0; j < length-1; j++) {
            int k = j+1;
            while(getValue(k-1) > getValue(k)) {
                int a = getValue(k-1);
                int b = getValue(k);
                getNode(k)->value = a;
                getNode(k-1)->value = b;
                if(k-1 == 0) break;
                k--;
            }
        }
    }

    void printList() {
        Node* temp;
        temp = head;
        while(temp != nullptr) {
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int getValue(int Index) {
        if(length == 0) return INT_MIN;
        else if(Index >= length || Index < 0) return INT_MIN;
        else if(Index == 0) return head->value;
        else if(Index == length-1) return tail->value;
        Node* temp = head;
        int i = 0;
        while(i < Index) {
            temp = temp->next;
            i++;
        }
        return temp->value;
    }    

    Node* getNode(int Index) {
        if(length == 0) return nullptr;
        else if(Index >= length || Index < 0) return nullptr;
        else if(Index == 0) return head;
        else if(Index == length-1) return tail;
        Node* temp = head;
        int i = 0;
        while(i < Index) {
            temp = temp->next;
            i++;
        }
        return temp;
    }

    Node* getHead() {
        return head;        
    }

    Node* getTail() {
        return tail;
    }

    int getLength() {
        return length;
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
    LinkedList* List = new LinkedList(2);
    List->append(5);
    List->append(3);
    List->append(4);
    List->append(1);
    List->printList();
    List->print_reverse();
    List->bubbleSort();
    cout << "Result of Bubble Sort : "; 
    List->printList();
    List->selectionSort();
    cout << "Result of Selection Sort : ";
    List->printList();
    List->insertionSort();
    cout << "Result of Insertion Sort : ";
    List->printList();
}