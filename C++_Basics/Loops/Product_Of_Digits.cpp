#include<iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter the number to print product of its digits: ";
    cin >> x;
    int product = 1;
    while(x != 0) {
        int t = x % 10;
        product *= t;
        x /= 10;
    }
    cout << product;
}