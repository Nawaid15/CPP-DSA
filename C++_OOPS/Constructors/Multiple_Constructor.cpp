#include<iostream>
using namespace std;
class Student {
public:
    string name;
    int rno;
    float cgpa;

    Student() { // Default Constructor

    }

    Student(string n, int r) { // This is used when I have called 2 parameters
        name = n;
        rno = r;
    }

    Student(string n, int r, float c) { // This is used when I have called 3 parameters
        name = n;
        rno = r;
        cgpa = c;
    }
};

int main() {
    Student s1("Nawaid", 1, 9.5);
    Student s2;// this is initialized purely by normal method
    s2.name = "Osaid";
    s2.rno = 2;
    s2.cgpa = 9.5;
    Student s3("Zaid", 3);
    s3.cgpa = 8.5;
    cout << s1.name << " " << s1.rno << " " << s1.cgpa << endl;
    cout << s2.name << " " << s2.rno << " " << s2.cgpa << endl;
    cout << s3.name << " " << s3.rno << " " << s3.cgpa << endl;
}