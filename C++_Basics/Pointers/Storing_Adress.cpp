#include<iostream>
using namespace std;
int main() {
    int x = 3;
    // int* is different datatype from int it is used store address
    int* p = &x; // this datatype is known as pointers to integer means only if variable defined as int
    cout << x << endl; // prints 3
    cout << p << endl; // prints address of x variable
    cout << &x << endl; // prints ame address as this is only stored in pointer
    cout << &p << endl; // will print adress of pointers
    cout << *p << endl; // using * operator we can access the x value known as derefrence operator
    *p = 5; // this will change the value of x variable
    cout << *p << endl;
    cout << x << endl;
}

// uses of derefrence operator(it is built when ointer declaration is done)
// Value ko Dekh sakte ho (cout << *ptr).
// Value ke sath Maths kar sakte ho (*p1 + *p2)
// the * used in int* p = &x; is not derefrence it is pointer declaration