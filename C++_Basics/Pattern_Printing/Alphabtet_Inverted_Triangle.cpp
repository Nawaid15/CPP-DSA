#include<iostream>
using namespace std;
int main (){
    int m;
    cout << "Enter the number to print number inverted triangle: ";
    cin >> m;
    int j = m;
    while(j >= 1) {
        for(int i = 1; i <= j; i++) {
            cout << (char)(i + 64) << " "; 
        }
        cout << endl;
        j -= 1;
    }
}