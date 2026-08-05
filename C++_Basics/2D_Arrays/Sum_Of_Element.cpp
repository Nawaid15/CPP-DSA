#include<iostream>
using namespace std;
int main() {
    int x,y;
    cout << "Enter the number of rows: ";
    cin >> x;
    cout << "Enter the number of columns: ";
    cin >> y;
    int arr[x][y];
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            cout << "Enter the element of column " << j + 1 << " of row " << i + 1 << " : ";
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << "The sum of elements of matrix is :- " << endl;
    int sum = 0;
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            sum += arr[i][j];
        }
    }
    cout << sum;
}