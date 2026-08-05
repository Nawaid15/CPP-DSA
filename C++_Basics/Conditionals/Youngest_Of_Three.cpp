#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout << "Enter the age of Nawaid: ";
    cin >> x;
    cout << "Enter the age of Osaid: ";
    cin >> y;
    cout << "Enter the age of Zaid: ";
    cin >> z;
    if(x < y) {
        if(x < z) {
            cout << "Nawaid is youngest of three";
        } 
        else {
            cout << "Zaid is youngest of three";
        }
    }
    else {
        if(y < z) {
            if(y < x) {
                cout << "Osaid is youngest of three";
            }
            else {
                cout << "Nawaid is youngest of three";
            }
        }
        else {
            cout << "Zaid is youngest of three";
        }
    }
}
