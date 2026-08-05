#include<iostream>
using namespace std;

class Student {
public:
    string name;
    int rno;
    int* marks; // 👈 Stack mein baitha pointer dabba

    // 1. Normal Parameterized Constructor (Birth System)
    Student(string name, int rno) {
        this->name = name;
        this->rno = rno;
        
        // Heap mein 6 dabbo ka ek asli dynamic array khada kiya!
        this->marks = new int[6]; 
    }

    // 🎯 2. ASLI DEEP COPY CONSTRUCTOR (Humein khud likhna padega)
    Student(const Student &source) {
        this->name = source.name; // s1 ka name s6 mein copy hua
        this->rno = source.rno;   // s1 ka rno s6 mein copy hua

        // 🔥 DEEP COPY MAGIC: s6 ke liye Heap mein ek ekdum BRAND NEW alag se 6-dabbo ka array banaya!
        this->marks = new int[6]; 

        // s1 ke puraane array se values utha kar s6 ke naye wale array mein thons di
        for(int i = 0; i < 6; i++) {
            this->marks[i] = source.marks[i]; // 👈 Dono ke paas apna alag dabba hai!
        }
    }
};

int main() {
    // Step 1: s1 paida hua. Iska array heap mein address 0x111 par bana.
    Student s1("Nawaid", 1);
    s1.marks[0] = 85; // s1 ke pehle subject ke marks
    
    // Step 2: s6 paida hua via Deep Copy! 
    // Iske liye heap mein ek ekdum alag naya array address 0x999 par book hua!
    Student s6(s1); 
    
    // Step 3: Proof Verification (Azaadi Check)
    s6.marks[0] = 99; // Humne s6 ke marks badal diye
    
    // Dekho bhai! Dono ekdum independent hain. s1 ke marks abhi bhi 85 hi rahenge!
    cout << "s1 marks: " << s1.marks[0] << endl; // Output: 85
    cout << "s6 marks: " << s6.marks[0] << endl; // Output: 99
}
