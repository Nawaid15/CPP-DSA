#include<iostream>
using namespace std;

class Loading {
public:
    void sum(int a, int b) {
        cout << a + b << endl;
    }
    void sum(int a, int b, int c) {
        cout << a + b + c<< endl;
    }
    void sum(string a, string b) {
        cout << a + b << endl;
    }
    // int sum(int a, int b) { // error as parameter is same to an another function 
    //     return a + b;
    // }
};

int main() {
    Loading l;
    l.sum("Nawaid"," Ahmad");
}

// polymorphism simply means multiple forms of a function as a person he/she can be son/daughter 
// or father/mother or brother/sister or husband/wife so same person is having many forms
// similarly above same function named sum have multiple forms one can add two numbers, one can add three
// numbers and one can add two strings

// Function Overloading ek Chota Weapon hai, jahan rasta sirf brackets ke badalte huye data types se tay 
// hota hai. Polymorphism ek Bada System Matrix hai, jahan sab kuch same hone par bhi Parent aur Child ki 
// relational boundary badalne se poora execution behavior change ho jata hai.