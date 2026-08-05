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
    if(x > y) {
        if(x > z) {
            cout << x << " is greatest of three";
        }
        else { 
            cout << z << " is the greatest of all three";
        }
    }
    else {
        if(y > z) {
            if(y > x) {
                cout << y << " is the greatest of three";
            }
            else {
                cout << x << " is greatest of three";
            }
        }
        else {
            cout << z << " is greatest of all three";
        }
    }
}