#include<iostream>
using namespace std;
#include<algorithm>
int main() {
    string x;
    cout << "Enter the string: ";
    getline(cin,x);
    if(x.length() < 5) cout << "Length of string must be greater than 5";
    else {
        reverse(x.begin() + 1 , x.begin() + 5);// it will reverse the string from 2nd to 5th positions
        cout << x;
    }
}