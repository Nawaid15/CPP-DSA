#include<iostream>
using namespace std;
int main() {
    int m,n;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;
    int i = 1;
    while(i <= m) {
        for(int j = 1; j <= n; j++){
            cout<< "*" << "  ";
        }
        cout << endl ;
        i += 1;
    }
}// m=3 n=2