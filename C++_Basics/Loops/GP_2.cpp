#include<iostream>
using namespace std;
int main() {
    int x;
    int a = 3;
    cout << "Enter the nth term: ";
    cin >> x;
    for(int i = 1; i <= x; i++) {
        cout << a << " ";
        a *= 4;
    }
}