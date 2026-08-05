#include<iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter a number: ";
    cin >> x;
    // (condition) ? if true : if false ;
    (x % 2 == 0) ? cout << "Even" : cout << "Odd" ;
}


// Grabage value and Default value concept
// garbage value is printed when we only declare a variable without iserting any values in it and starts to print it
//for example:- int x; 
//              cout << x; this will throw the garbage value

// example of default value
// int g; // 🌍 Global Variable
// int main() {
//    cout << g; //  Output hamesha '0' aayega (No Garbage!)
// } 
//Default value is applied when Yeh tab apply hoti hai jab cin >>
// se live user input lene mein koi galti (Input Mismatch Failure) ho jaye like if I had put + - or any other
// special character in user input then c++ will fill by default value zero and hence result will always come
// as even