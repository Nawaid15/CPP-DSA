#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;
    if(x > 0 && y > 0) cout << "Fisrt Quadrant";
    else if(x > 0 && y < 0) cout << "Fourth Quadrant";
    else if(x < 0 && y > 0) cout << "Second Quadrant";
    else if(x < 0 && y < 0) cout << "Third Quadrant";
    else cout << "Origin";
}