#include<iostream>
using namespace std;
int main() {
    int a = 1;
    int n;
    cout << "Enter the nth term: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cout << a << " ";
        a *= 2;
    }
}

