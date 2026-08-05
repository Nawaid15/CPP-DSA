#include<iostream>
using namespace std;
int main() {
    int x,j;
    cout << "Enter the number to print strange inverted triangle: ";
    cin >> x;
    int k = 1;
    for(int i = 1; i <= x; i++) {
        for(j = 1; j <= x; j++) {
            if(j <= (x - i)) cout << "  ";
            else {
                cout << k << " ";
                k += 1;
            }
        }
        k = 1;
        cout << endl; 
    }
}


























