#include<iostream>
using namespace std;
int main(){
    float x,y,z;
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    cout << "Enter the third number: ";
    cin >> z;
    if(x > y && x > z) {cout << x; cout << " is greatest than all three numbers";}
    else if(y > x && y > z) {cout << y; cout << " is greatest than all three numbers";}
    else {cout << z; cout << " is greatest than all three numbers";}
}

// if-if-if and if-(else if)-else statement has alot of differnce in first case the computer will check all the three 
// independently as independent questions and if all the three staments fails then no output will be returned on the
// screen but in second case else is a backup option means if above two staments fails then automatically without 
// checking the condition it will print the else statement hence we can conclude that if we use second pattern
// which is if-(else if)-else then some output will always be returned no matter all the conditions failed 
// which is not the case in if-if-if, hence else will be used as backup option 