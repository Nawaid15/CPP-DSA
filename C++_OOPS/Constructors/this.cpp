#include<iostream>
using namespace std;

class Student {
public:
    int rno;
    float cgpa;
    string name;
    int* marks;

    Student(string name, int rno, float cgpa) {
        this->name = name;
        this->rno = rno;
        this->cgpa = cgpa;
        this->marks = new int[6];     
    }

    // Student(const Student &source) {    
    //     this->name = source.name;
    //     this->rno = source.rno;
    //     this->cgpa = source.cgpa;
        
    //     for(int i = 0; i < 6; i++) {
    //         source.marks[i] = marks[i];
    //     }
    // }
};

int main() {
    Student s1("Nawaid",1,9.5);
    s1.marks[0] = 85;
    Student s6(s1);
    cout << s1.name << " " << s1.rno << " " << s1.cgpa << " " << s1.marks[0] << endl;
    s1.name = "Osaid";
    cout << s6.name << " " << s6.rno << " " << s6.cgpa << " " << s6.marks[0] << endl;
}
