#include<iostream>
using namespace std;
int main() {
    int n,i;
    cout << "Enter the n number to print factorial of first n numbers: ";
    cin >> n; // 5
    int product = 1;
    while(n >= 0) {
        for(i = 1; i <= n; i++) {// i=2
            product *= i;// 24
        }
        cout << "Factorial of " << n << " is " << product << endl;
        product = 1;
        n -= 1;
    }
}
