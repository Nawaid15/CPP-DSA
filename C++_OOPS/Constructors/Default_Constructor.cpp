#include<iostream>
using namespace std;
class Student {
public:
    int rno;
    string name;
    float cgpa;
    int age;
    float percentage;

    // Student() { // Default Constructor

    // }

    Student(string n, int r) { // Parameterised Constructor
        name = n;
        rno = r;
    }
};

int main() {
    Student s1("Nawaid", 1);// we can also make two parameters 
    s1.cgpa = 9.5;// and third one will be initialised by normal method but default constructor also must 
    // be present
    s1.cgpa = 9.6;// overwrite
    s1.age = 18;
    s1.percentage = 82.8;
    cout << s1.name << " " << s1.rno << " " << s1.cgpa << " " << s1.age << " " << s1.percentage << endl; 
    // Student s2;// default operator is only required for writing this line 
    // s2.name = "Osaid";// rest of the lines can be either initialised like this or by constructor 
    // according to parameters you have defined If you have defined 3 parameters then the rest of the two 
    // you have to initialize like this 
    // s2.rno = 2;
    // s2.cgpa = 9;
    // cout << s2.name << " " << s2.rno << " " << s2.cgpa << endl;
}

// If I want to print the details by both method by costructor and just by normal method then I have to 
// create one more empty constructor which will enable the standard method of initialization
// because there is already a constructor present when we have not created which is default constructor
// when we create any constructor the previous one is deleted hence we are not able to print with normal
// method hence we have to create a default constructor too which will enable this normal method again
