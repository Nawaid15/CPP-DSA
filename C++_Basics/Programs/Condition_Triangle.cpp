#include<iostream>
using namespace std;
int main(){
    float x;
    float y;
    float z;
    cout << "Enter the 1st side of the triangle: ";
    cin >> x;
    cout << "Enter the 2nd side of the triangle: ";
    cin >> y;
    cout << "Enter the 3rd side of the triangle: ";
    cin >> z;
    if((x + y) > z && (y + z) > x && (x + z) > y) cout << "The given sides can be the sides of the triangle";
    else cout << "The given sides cannot be the sides of triangle";
}