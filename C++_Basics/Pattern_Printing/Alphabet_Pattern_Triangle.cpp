#include<iostream>
using namespace std;
int main (){
    int m;
    cout << "Enter the number to print star triangle: ";
    cin >> m;
    int j = 1;
    while(j <= m) {
        for(int i = 65; i <= j + 64; i++) {
            cout << (char)i << " ";
        }
        cout << endl;
        j += 1;
    }
}