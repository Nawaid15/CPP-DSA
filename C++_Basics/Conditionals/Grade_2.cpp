#include<iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter your marks between 0 to 100: ";
    cin >> x;
    if(x >= 80 && x <= 100) {
        cout << "Very Good";
    }
    else {
        if(x >= 60) {
            cout << "Good";
        }
        else {
            if(x > 40) {
                cout << "Average";
            }
            else {
                if(x < 40 && x >= 0) {
                    cout << "Fail";
                }
                else {
                    cout << "Invalid Marks";
                }
            }
        }
    }
}