#include<iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    if(x % 3 == 0 || x % 5 == 0) cout << "The number is either divisible by 3 or 5";
    else cout << "The number is niether divisible by 3 nor 5";
}
// if we have to check divisibility of float which cannot be checked by % operator then in C++ there is inuilt function
// which is  fmod() to check divisibility of float