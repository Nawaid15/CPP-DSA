#include<iostream>
using namespace std;
int main() {
    string x;
    cout << "Enter the string: ";
    getline(cin,x);
    cout << x << endl;
    for(int i = 0; i < x.length(); i++) {
        if(i % 2 == 0) x[i] = 'a';
    }
    cout << x;
}

