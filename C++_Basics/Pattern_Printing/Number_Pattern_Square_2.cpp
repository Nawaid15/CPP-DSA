#include<iostream>
using namespace std;
int main() {
    int m,j;
    cout << "Enter the number to see a number pattern: ";
    cin >> m;
    int i = 1;
    while(i <= m) {
        int temp = i;
        for(int i = 1; i <= m; i++) {
            cout<< temp << " ";
        }
        cout << endl ;
        i += 1;
    }
}