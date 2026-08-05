#include<iostream>
using namespace std;
int factorial(int n) {
    int t = n; // 5
    while(n != 0){
        n = n - 1;// 0
        if(n == 0) break;
        t *= n;
    }
    return t;
}
int Combination(int n, int r) {
    int i = factorial(n);
    int j = factorial(r);
    int k = factorial(n-r);
    int y = i/(j*k);
    return y;
}
int main() {
    int m,n;
    cout << "Enter n: ";
    cin >> m;
    cout << "Enter r: ";
    cin >> n;
    cout << Combination(m,n);
}