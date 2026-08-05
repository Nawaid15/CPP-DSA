#include<iostream>
using namespace std;
int main() {
    int m;
    cout << "Enter the number to see a alphabet pattern: ";
    cin >> m;
    int i = 1;
    while(i <= m) {
        for(int i = 65; i <= 65 + m; i++){
            cout<< (char)i << " ";
        }
        cout << endl ;
        i += 1;
    }
}