#include<iostream>
using namespace std;
int main() {
    int x,y;
    cout << "Enter the number of rows: ";
    cin >> x;
    cout << "Enter the number of columns: ";
    cin >> y;
    int arr[x][y];
    int arr2[y][x];
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
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            arr2[j][i] = arr[i][j];
        }
    }
    cout << endl << "The transpose of the matrix is :- " << endl;
    for(int i = 0; i < y; i++) {
        for(int j = 0; j < x; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
}

// #include<iostream>
// using namespace std;
// int main() {
//     int x,y;
//     cout << "Enter the number of rows: ";
//     cin >> x;
//     cout << "Enter the number of columns: ";
//     cin >> y;
//     int arr[x][y];
//     for(int i = 0; i < x; i++) {
//         for(int j = 0; j < y; j++) {
//             cout << "Enter the element of column " << j + 1 << " of row " << i + 1 << " : ";
//             cin >> arr[i][j];
//         }
//     }
//     for(int i = 0; i < x; i++) {
//         for(int j = 0; j < y; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl << "The transpose of the matrix is :- " << endl;
//     for(int j = 0; j < y; j++) {
//         for(int i = 0; i < x; i++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }