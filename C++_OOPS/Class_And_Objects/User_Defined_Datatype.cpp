#include<iostream>
#include<string>
using namespace std;
class Student {
public:
    int rno;
    string name;
    float cgpa;
    int marks[6];
};

int main() {
    Student s1;
    s1.rno = 1;
    s1.name = "Nawaid";
    s1.cgpa = 9.5;
    for(int i = 0; i < 6; i++) {
        cout << "Enter the marks of subject " << i + 1 << " of " << s1.name << " : ";
        cin >> s1.marks[i];
    }
    Student s2;
    s2.rno = 2;
    s2.name = "Osaid";
    s2.cgpa = 9;
    for(int i = 0; i < 6; i++) {
        cout << "Enter the marks of subject " << i + 1 << " of " << s2.name << " : ";
        cin >> s2.marks[i];
    }
    cout << s1.name << " " << s1.rno << " " << s1.cgpa << " ";
    for(int i = 0; i < 6; i++) {
        cout << s1.marks[i] << " ";
    }
    cout << endl;
    cout << s2.name << " " << s2.rno << " " << s2.cgpa << " " << " ";
    for(int i = 0; i < 6; i++) {
        cout << s2.marks[i] << " ";
    }
}