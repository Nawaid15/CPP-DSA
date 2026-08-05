#include<iostream>
using namespace std;
int main(){
    float x;
    cout << "Enter the length of the rectange: ";
    cin >> x;
    float y;
    cout << "Enter the breadth of the rectangle: ";
    cin >> y;
    cout << "The Area of the rectangle is : " << x*y << endl;
    cout << "The Perimeter of the rectangle is : " << 2*x + 2*y << endl;
    if(x*y > 2*x + 2*y) cout << "The Area of rectangle is greater than its perimeter" << endl;
    else cout << "The Area of rectangle is less than its perimeter" << endl;
}