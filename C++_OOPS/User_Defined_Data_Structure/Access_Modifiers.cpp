#include<iostream>
using namespace std;

class Student {
public:
    float cgpa;
    string name;

    Student(int marks, string name, float cgpa) {
        this->name = name;
        this->cgpa = cgpa;
        this->marks = marks;
    }

    void print() {
        cout << this->marks << " " << this->name << " " << this->cgpa << endl;
    }

    int getmarks() { // getters
        return this->marks; 
    }

    void markssetter(int n) { //setters
        if(n > 0 && n <= 100) this->marks = n;
        else cout << "Invalid Marks" << endl;
    }

private:
    int marks;

};

int main() {
    Student s1(98,"Nawaid",9.5);
    Student s2(99,"Osaid",9.5);
    s1.print();
    s1.name = "Osaid";
    s1.cgpa = 9;
    s1.print();
    s2.print();
    cout << s1.getmarks() << endl;
    cout << s2.getmarks() << endl;
    s1.markssetter(100);
    cout << s1.getmarks() << endl;
    s1.markssetter(101);
    cout << s1.getmarks() << endl;
    cout << s2.getmarks() << endl;
}