#include<iostream>
using namespace std;
int main() {
    int x = 2;
    int y;
    cout << "Enter columns: ";
    cin >> y;
    int arr[x][y];
    for(int i = 1; i < x; i++) {
        if(i == 1) {
            for(int j = 0; j < y; j++) {
                cout << "Enter the roll.no " << j + 1 << " : ";
                cin >> arr[i][j];
            }
        }
        else {
            for(int j = 0; j < y; j++) {
                cout << "Enter the marks of roll.no " << j + 1 << " : ";
                cin >> arr[i][j];
            }
        }
    }
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            cout << "marks of roll.no " << j + 1 << " : " << arr[i][j];
        }
        cout << endl;
    }
}