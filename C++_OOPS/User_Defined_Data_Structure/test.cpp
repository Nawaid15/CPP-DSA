#include<iostream>
using namespace std;

class Student {
public:
    int rno;
    string name;
    float cgpa;
    int* marks = new int[6];

    Student(int rno, string name, float cgpa) {
        this->rno = rno;
        this->name = name;
        this->cgpa = cgpa;
    }

    Student(Student& s) { // Deep Copy Constructor
        this->rno = s.rno;
        this->name = s.name;
        this->cgpa = s.cgpa;
        this->marks = new int[6];
        for(int i = 0; i < 6; i++) {
            marks[i] = s.marks[i];
        }   
    }

    ~Student() {// destructor which will delete the default constructor
        delete marks;
    }
};

int main() {
    Student s1(1,"Nawaid",9.5);
    s1.marks[0] = 95;
    Student s7(s1);
    // Student s6(s1);
    cout << s1.marks[0] << endl;
    cout << s7.marks[0] << endl;
    s1.marks[0] = 90;
    cout << s7.marks[0] << endl;
    cout << s1.marks[0] << endl;
    // cout << s1.marks[1] << endl;
    // cout << s6.marks[1] << endl;
    // cout << s7.marks[1] << endl;
    // s1.marks[1] = 90;
    // cout << s1.marks[1] << endl;
    // cout << s6.marks[1] << endl;
    // cout << s7.marks[1] << endl;
}