#include<iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter the number to print number pattern triangle: ";
    cin >> x;//4
    int j = x;
    while(j >= 1) {// 2 <= 5
        for(int i = x; i >= j; i--) {
            cout << i << " ";
        }
        cout << endl;
        j -= 1;//2
    }
}