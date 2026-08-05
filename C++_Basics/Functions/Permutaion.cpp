#include<iostream>
using namespace std;
int factorial(int x) {
    int t = 1;
    for(int i = 1; i <= x; i++) {
        t *= i; 
    } 
    return t;
}

int Permutation(int n, int r) {
    int a = factorial(n);
    int b = factorial(n-r);
    int z = a/b;
    return z;
}

int main() {
    int k,l;
    cout << "Enter n: ";
    cin >> k;
    cout << "Enter r: ";
    cin >> l;
    cout << Permutation(k,l);
}