#include<iostream>
using namespace std;

class Node {
    public:
    int value;
    string key;
    Node* next;

    Node(string key,int value) {
        this->key = key;
        this->value = value;
        next = nullptr;
    }
};

class HashTable {
    private:
    const static int SIZE = 210; 
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

    void set(string key, int value) {
        Node* newNode = new Node(key,value);
        int index = Hash(key);
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

    Node* get(int index) {
        if(index < 0 || index >= SIZE) {
            cout << index << " is Invalid Index" << endl; 
            return nullptr;
        }
        else if(dataMap[index] == nullptr) {
            cout << "Empty at index " << index << endl;
            return nullptr;
        }
        return dataMap[index];
    }

    int getvalue(string key) {
        int index = Hash(key);
        Node* temp = get(index);
        if(temp == nullptr) return INT_MIN;
        while(temp) {
            if(temp->key == key) return temp->value;
            temp = temp->next;
        }
        cout << "Not Found " << key << endl;
        return INT_MIN;
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
};

int main() {
    HashTable* Hash = new HashTable();
    // Hash->set("Nawaid",1);
    // Hash->set("Osaid",2);
    // Hash->set("Junaid",3);
    // Hash->set("Zaid",4);
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
    "google","microsoft","appleinc","amazon","meta","openai","tesla","nvidia","intel","amd","ertugrul"
    };

    for(int i = 0; i < 261; i++) {
        Hash->set(words[i],i+1);
    }
    Hash->printTable();
    cout << Hash->get(5)->key << " " << Hash->get(5)->value << endl;
    cout << Hash->get(206)->key << " " << Hash->get(206)->next->key << endl;
    cout << Hash->get(187)->key << endl;
    cout << Hash->get(2)->next->key << endl;
    cout << Hash->getvalue("ertugrul") << endl;
}