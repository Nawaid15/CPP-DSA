#include<iostream>
using namespace std;
int main() {
    int m;
    cout << "Enter the number to see a number pattern: ";
    cin >> m;
    int i = 1;
    while(i <= m) {
        for(int i = 1; i <= m; i++){
            cout<< i << " ";
        }
        cout << endl ;
        i += 1;
    }
}