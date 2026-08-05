#include<iostream>
using namespace std;
int x,y;
int k = 1;
int fibonacci(int a) {
    if(a == 1) return 0;
    else if(a == 2 || a == 3) return 1;
    return fibonacci(a - 1) + fibonacci(a - 2);
}
int main() {   
    int z;
    cout << "Enter number to print the nth term of fibonacci series: ";
    cin >> z;
    cout << fibonacci(z);
}
// 0 1 1 2 3 5 8 13 