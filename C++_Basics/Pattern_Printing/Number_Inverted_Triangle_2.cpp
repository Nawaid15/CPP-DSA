#include<iostream>
using namespace std;
int main (){
    int m;
    cout << "Enter the number to print number inverted triangle: ";
    cin >> m;//4
    int j = 1;
    while(j <= m) {// 2 <= 4 True
        for(int i = 1; i <= m - j + 1; i++) {
            cout << j << " "; 
        }
        cout << endl;
        j += 1;// j = 2
    }
}