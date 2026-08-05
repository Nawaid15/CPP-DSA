#include<iostream>
using namespace std;
int pow(int a,int b) {
    if(b == 0) return 1;
    else if(b < 0) return 0;
    return a * pow(a,b - 1);
}
int main() {
    int x,y;
    cout << "Enter the number to calculate power: ";
    cin >> x;
    cout << "Enter the exponent: ";
    cin >> y;
    cout << x << " raised to power " << y << " is " << pow(x,y);
}