#include<iostream>
using namespace std;
#include"My_Library.h"
int main() {
    int x;
    cout << "Enter the number to print pascal triangle: ";
    cin >> x;
    for(int j = 0; j <= x; j++) {
        for(int k = 1; k <= x - j + 1; k ++) {
            cout << "  ";
        }
        for(int i = 0; i <= j; i++) {
            cout << Combination(j,i) << "   ";
        }
        cout << endl;
    }
}
//           1
//         1   1
//       1   2   1
//     1   3   3   1
//   1   4   6   4   1
// 1   5   10   10   5   1 