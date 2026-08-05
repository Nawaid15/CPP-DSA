#include<iostream>
using namespace std;
int main() {
    int x,y;
    cout << "Enter rows: ";
    cin >> x;
    cout << "Enter columns: ";
    cin >> y;
    int arr[x][y];
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            cout << "Enter the element of column " << j + 1 << " of row " << i + 1 <<" : ";
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int k = INT_MIN;
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            if(arr[i][j] > k) {
                k = arr[i][j];
            }
        }
    }
    cout << "The maximum element of the array is " << k;
}