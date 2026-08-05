#include<iostream>
using namespace std;
int main (){
    int m;
    cout << "Enter the number to print number alphabet triangle: ";
    cin >> m;//5
    int j = 1;
    while(j <= m) {// 6 <= 5 False
        for(int i = 1; i <= j; i++) {// 2 <= 2;
            if(j % 2 != 0) {// 1 % 2 == 0 False
                cout << i << " ";// 1 2 3
            }
            else {
                cout << (char)(i + 64) << " ";  // A B
            }
        }
        cout << endl;
        j += 1; // j = 6
    }
}