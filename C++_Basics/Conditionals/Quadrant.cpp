#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;
    if(x < 0) {
        if(y > 0) {
            cout << "Second Quadrant";
        }
        else {
            if(y == 0) cout << "Does not lie on specific quadrant, it lies on negative x axis";
            else cout << "Third Quadrant";
        }
    }
    else {
        if(x > 0) {
            if(y > 0) {
                cout << "First Quadrant";
            }
            else {
                if(y == 0) cout << "Does not lie on specific quadrant, it lies on positive x axis";
                else cout << "Fourth Quadrant";
            }
        }
        else {
            if((x == 0 && y != 0)){
                if(y > 0) cout << "Does not lie on specific quadrant, it lies on positive y axis";
                else cout << "Does not lie on specific quadrant, it lies on negative y axis";
            }
            else cout << "Origin";
        }
    }
}


