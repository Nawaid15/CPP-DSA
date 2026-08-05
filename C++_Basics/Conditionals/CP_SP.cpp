#include<iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter Cost Price: ";// if x is defined as integer and y is float then if float value is inserted in x 
    // then it will only take the integer value for exmple in 23.4 it will take 23 and rest 0.4 will be inserted in y so 
    // it will not take the input from the user hence for definig x and y define both as float or double
    cin >> x;
    float y;
    cout << "Enter Sell Price: ";
    cin >> y;
    if(x > y) {cout << "You have made loss" <<endl;
               cout << "Loss made is : "; cout << x-y;}
    else if(x == y) cout << "You have niether mad profit nor loss" <<endl;
    else {cout << "You have made profit" <<endl; 
          cout << "Profit made is : "; cout << y-x;}

}
