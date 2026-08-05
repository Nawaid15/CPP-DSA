#include<iostream>
using namespace std;

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
    static const int SIZE = 211;
    Node* dataMap[SIZE];

    public:
    HashTable() {
        for(int i = 0; i < SIZE; i++) {
            dataMap[i] = nullptr;
        }
    }

    // int Hash(string key) {
    //     int Hash = 0;
    //     for(int i = 0; i < key.length(); i++) {
    //         Hash = (Hash + (int(key[i])*23)) % SIZE;
    //     }
    //     return Hash;
    // }

    int Hash(string key) {
        int Hash = 7;
        for(int i = 0; i < key.length(); i++) {
            Hash *= 13;
            Hash = ((Hash + int(key[i])*101)) % SIZE;
        }
        return Hash;
    }

    void insert(string key,int value) {
        int index = Hash(key);
        Node* newNode = new Node(key,value);
        if(dataMap[index] == nullptr) {
            dataMap[index] = newNode;
        }
        else {
            Node* temp = dataMap[index];
            Node* pre = temp;
            while(temp) {
                pre = temp;
                temp = temp->next;
            }
            pre->next = newNode;
        }
    }
    void printTable() {
        for(int i = 0; i < SIZE; i++) {
            if(dataMap[i] == nullptr) { 
                cout << i << " : " << endl;
                continue;
            }
            Node* temp = dataMap[i];
            cout << i << " : ";
            while(temp) {
                cout << temp->key << " " << temp->value << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
    void statistics() {
        int empty = 0;
        int maxChain = 0;
        int totalNodes = 0;

        for(int i = 0; i < SIZE; i++) {
            int count = 0;
            Node* temp = dataMap[i];

            while(temp) {
                count++;
                temp = temp->next;
            }

            totalNodes += count;

            if(count == 0)
                empty++;

            if(count > maxChain)
                maxChain = count;
        }

        cout << "Empty Buckets : " << empty << endl;
        cout << "Longest Chain : " << maxChain << endl;
        cout << "Average Load  : " << (double)totalNodes / SIZE << endl;
    }
};

int main() {
    HashTable* Hash = new HashTable();
    // Hash->insert("apple",1);
    // Hash->insert("banana",2);
    // Hash->insert("mango",3);
    // Hash->insert("Nawaid",1);
    // Hash->insert("Osaid",1);
    // Hash->insert("Junaid",1);
    // Hash->insert("orange",7);
    // Hash->insert("guava",98);
    // Hash->insert("Dates",100);
    // Hash->insert("cat",101);
    // Hash->insert("dog",27897);
    // Hash->insert("Zaid",12);
    // Hash->insert("AnkurWarikoo",77000);
    // Hash->insert("AyushKumarSingh",887);
    string words[] = {
    "apple","banana","mango","orange","grape","guava","kiwi","melon","papaya","pear",
    "peach","plum","berry","lemon","lime","coconut","apricot","fig","date","cherry",
    "car","bike","truck","bus","train","plane","boat","ship","cycle","scooter",
    "red","blue","green","yellow","black","white","purple","pink","brown","gray",
    "cat","dog","lion","tiger","bear","wolf","fox","deer","rabbit","horse",
    "cow","goat","sheep","camel","zebra","monkey","elephant","giraffe","panda","kangaroo",
    "india","pakistan","china","japan","korea","nepal","bhutan","canada","brazil","mexico",
    "paris","london","berlin","tokyo","delhi","mumbai","kolkata","chennai","dubai","moscow",
    "computer","keyboard","mouse","monitor","printer","speaker","camera","mobile","tablet","laptop",
    "cpp","java","python","javascript","html","css","react","node","mysql","linux",
    "book","pen","pencil","eraser","scale","marker","notebook","paper","folder","bag",
    "table","chair","window","door","fan","light","clock","mirror","bed","sofa",
    "water","juice","coffee","tea","milk","bread","rice","pizza","burger","pasta",
    "earth","mars","venus","jupiter","saturn","uranus","neptune","pluto","sun","moon",
    "alpha","beta","gamma","delta","epsilon","zeta","eta","theta","iota","kappa",
    "iron","gold","silver","copper","zinc","nickel","lead","tin","platinum","diamond",
    "john","alice","bob","charlie","david","emma","oliver","lucas","mia","sophia",
    "nawaid","osaid","junaid","ayush","ankur","zaid","ahmad","rahul","rohan","amit",
    "hash","tree","graph","queue","stack","array","vector","string","pointer","object",
    "music","movie","drama","comedy","action","thriller","horror","anime","comic","novel",
    "winter","summer","spring","autumn","rain","storm","cloud","snow","wind","fog",
    "one","two","three","four","five","six","seven","eight","nine","ten",
    "zero","hundred","thousand","million","billion","trillion","infinity","random","search","insert",
    "delete","update","sort","merge","split","binary","linear","dynamic","static","virtual",
    "future","present","past","dream","vision","logic","memory","process","thread","kernel",
    "google","microsoft","appleinc","amazon","meta","openai","tesla","nvidia","intel","amd"
    };

    for(int i = 0; i < 260; i++) {
        Hash->insert(words[i],i+1);
    }
    Hash->printTable();
    Hash->statistics();
}