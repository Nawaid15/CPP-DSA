#include<iostream>
using namespace std;
int main() {
    int x,t;
    cout << "Enter the number to print the sum of the number and its reverse: ";
    cin >> x;// 4321
    int store = x;
    int r = 0;
    while(x != 0){
        t = x % 10;// 4
        r *= 10;// 1230
        r += t;// 1234
        x /= 10;// 0 
    }
    cout << store + r;
}