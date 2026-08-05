#include<iostream>
using namespace std;
int main() {
    int m;
    cout << "Enter the number x for x * x square: ";
    cin >> m;
    int i = 1;
    while(i <= m) {
        for(int i = 1; i <= m; i++){
            cout<< "*" << "  ";
        }
        cout << endl ;
        i += 1;
    }
}