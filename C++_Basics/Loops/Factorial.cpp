#include<iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter the number to print its factorial: ";
    cin >> x;// 5
    int t = x; // 5
    while(x != 0){
        x = x - 1;// 0
        if(x == 0) break;
        t *= x;// 5*4=20 t = 120
    }
    cout << t;
}