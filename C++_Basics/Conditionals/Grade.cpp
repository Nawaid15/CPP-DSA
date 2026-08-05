#include<iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter your marks between 0 to 100: ";
    cin >> x;
    if(x > 80 && x <= 100) {
        cout << "Very Good";
    }
    else if(x > 60 && x <= 80) {
        cout << "Good";
    }
    else if(x > 40 && x <= 60) {
        cout << "Average";
    }
    else {
        cout << "Fail";
    }
}