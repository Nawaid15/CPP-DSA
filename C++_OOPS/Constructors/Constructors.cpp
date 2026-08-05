// standard way
// #include<iostream>
// using namespace std;
// class Student {
// public:
//     int rno;
//     string name;
//     float cgpa;

//     Student(int r, string n, float c) {
//         rno = r;
//         name = n;
//         cgpa = c; 
//     }
// };

// int main() {
//     Student s1(1,"Nawaid",9.5);
//     cout << s1.name << " " << s1.cgpa << " " << s1.rno << endl; 
// }

// more smarter way

#include<iostream>
using namespace std;
class Student {
public:
    int rno;
    string name;
    float cgpa;

    Student(int r, string n, float c) : rno(r), name(n), cgpa(c) {}
    // this function is knon as constructor it has no return type and it has name same as our class
};

int main() {
    Student s1(1,"Nawaid",9.5);// this is not pure syntax this has a logic for one entry we donot need 
// any naming ike s1 but for more than 1 entires compiler needs to differntiate whcih value is of which is
// the description of which instance hence it is generalised for all that we have to name them first
//     cout << s1.name << " " << s1.cgpa << " " << s1.rno << endl; 
}

