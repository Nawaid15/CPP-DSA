#include<iostream>
using namespace std;

class Student {
public: 
    string name;
    int rno;
    float cgpa;
    int year;

    Student(string name, int rno, float cgpa, int year) {
        this->name = name;
        this->rno = rno;
        this->cgpa = cgpa;
        this->year = year;
    }

    void print(float cgpa) {
        cout << name << " " << rno << " " << cgpa << " " << year << endl;
        cout << cgpa << endl;
    }

};

int main() {
    Student s1("Nawaid",1,9.5,1);
    Student s2("Osaid",2,9,2);
    s1.print(8.2);// this prints 8.2 in cgpa
    cout << s1.cgpa << endl; // this 9.5 but why?!! because of scope of variable
    s2.print(8.2);
}

