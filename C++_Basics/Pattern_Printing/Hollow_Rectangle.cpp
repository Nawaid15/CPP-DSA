#include<iostream>
using namespace std;
int main() {
    int x,y,j;
    cout << "Enter the number of columns: ";
    cin >> x;
    cout << "Enter the number of rows: ";
    cin >> y;
    for(int i = 1; i <= y; i++) {
        for(j = 1; j <= x; j++) {
            if((i == 1 || i == y) || (j == 1 || j == x)) cout << "* ";
            else cout << "  ";
        }
        cout << endl; 
    }
}
