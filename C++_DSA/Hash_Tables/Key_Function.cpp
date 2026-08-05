#include<iostream>
using namespace std;
#include<string>
#include<vector>

class Node {
    public:
    string key;
    int value;
    Node* next;

    Node(string key,int value) {
        this->key = key;
        this->value = value;
        next = nullptr;
    }
};

class HashTable {
    private:
    const static int SIZE = 7;
    Node* dataMap[SIZE];

    public:
    HashTable() {
        for(int i = 0; i < SIZE; i++) {
            dataMap[i] = nullptr;
        }
    }

    int Hash(string key) {
        int Hash = 7;
        for(int i = 0; i < key.length(); i++) {
            Hash *= 13;
            Hash = (Hash + int(key[i])*101) % SIZE;
        }
        return Hash; 
    }

    void set(string key,int value) {
        Node* newNode = new Node(key,value);
        int index = Hash(key);
        if(dataMap[index] == nullptr) {
            dataMap[index] = newNode;
        }
        else {
            Node* temp = dataMap[index];
            while(temp) {
                if(temp->next == nullptr) {
                    temp->next = newNode;
                    break;
                }
                temp = temp->next;
            }
        }
    }

    vector<string> key() {
        vector<string> allkeys;
        for(int i = 0; i < SIZE; i++) {
            Node* temp = dataMap[i];
            while(temp) {
                allkeys.push_back(temp->key);
                temp = temp->next;
            }
        }
        return allkeys;
    }

    int getvalue(string key) {
        int index = Hash(key);
        if(dataMap[index] == nullptr) {
            cout << "Not Found " << key << " at index " << index << endl;
            return INT_MIN;
        }
        Node* temp = dataMap[index];
        while(temp) {
            if(temp->key == key) return temp->value;
            temp = temp->next;
        }
        cout << " Not Found " << key << " at index " << index << endl;
        return INT_MIN;
    }

    void printTable() {
        for(int i = 0; i < SIZE; i++) {
            if(dataMap[i] == nullptr) cout << i << " : " << endl; 
            else {
                Node* temp = dataMap[i];
                cout << i << " : ";
                while(temp) {
                    cout << temp->key << " " << temp->value << " ";
                    temp = temp->next;
                }
                cout << endl;
            }
        }
    }
};

int main() {
    HashTable* Hash = new HashTable();
    Hash->set("Nawaid",1);
    Hash->set("Osaid",2);
    Hash->set("Junaid",3);
    Hash->set("Ertugrul",4);
    Hash->printTable();
    cout << Hash->getvalue("Ertugrul") << endl;
    vector<string> keys = Hash->key();
    for(int i = 0; i < keys.size(); i++) {
        cout << keys[i] << " ";
    }
}