#include<iostream>
using namespace std;
int main() {
    string str = "Nawaid";
    cout << str.size() << endl; // these both will give the same value which is 6 but one is null character 
    // but it is not considered by this at this time hence it will print 6 only not 7
    cout << str.length() << endl;
    cout << str[6];
    // null character which is in the end of the string is '/0' if we print this nothing will be printed
    // and its ASCII value is 0 we can even typecaste and see for proof
    int x = 0;
    char ch = '\0';
    cout << ch << endl; // nothing will be printed as it is a null character
    cout << (char)x << endl; // this will also print nothing as ASCII value of null operator is zero and its 
    // character form is null character which itself prints nothing and it tells where is the string ending
    cout << (int)x << endl;
    cout << str.c_str();
    // double "" and single '' has difference as '' is used for single character and it is only used for char
    // datatype and "" is used for multiple character you can write words scentences and even a single letter
    // this is used in char array or strings
}

