#include<iostream>
using namespace std;
int main (){
    int m;
    cout << "Enter the number to print star triangle: ";
    cin >> m;
    int j = 1;
    while(j <= m) {
        for(int i = 1; i <= j; i++) {
            cout << i << " ";
        }
        cout << endl;
        j += 1;
    }
}