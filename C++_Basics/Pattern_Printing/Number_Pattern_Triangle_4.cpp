#include<iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter the number to print then number pattern: ";
    cin >> x;//5
    int i = 1;
    while(i <= x) {//3 <= 5 True
        for(int j = 1; j <= i; j++) {// 
            cout << 2 * j - 1 << " ";//1 3
        }
        cout << endl;//
        i += 1;//i=3
    }
}