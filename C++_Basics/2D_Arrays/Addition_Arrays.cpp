#include<iostream>
using namespace std;
int main() {
    int x,y;
    cout << "Enter number of rows: ";
    cin >> x;
    cout << "Enter number of columns: ";
    cin >> y;
    int arr[x][y];
    int arr2[x][y];
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            cout << "Enter the element in column " << j + 1 << " of row " << i + 1 << " of array 1 : ";
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            cout << "Enter the element in column " << j + 1 << " of row " << i + 1 << " of array2 : ";
            cin >> arr2[i][j];
        }
    }
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    int sum = 0;
    cout << endl << "The sum of matrices are :-" << endl << endl;
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            sum = arr[i][j] + arr2[i][j];
            cout << sum << " ";
        }
        cout << endl;
    }
}