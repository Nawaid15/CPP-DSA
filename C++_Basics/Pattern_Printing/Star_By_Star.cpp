#include<iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter the number to print star pattern by star itself: ";
    cin >> x;
    for(int j = 1; j <= x; j++) {
        for(int i = 1; i <= x; i++) {
            if((i == j || i == (x - j + 1))) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }
}




