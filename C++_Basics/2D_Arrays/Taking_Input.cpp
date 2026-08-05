// #include<iostream>
// using namespace std;
// int main() {
//     int x,y;
//     cout << "Enter the rows: ";
//     cin >> x;
//     cout << "Enter the columns: ";
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
//             cout << "Element of column " << j + 1 << " of row " << i + 1 << " is " << arr[i][j] << endl;
//         }
//     }
// }

//this will give a proper 2D Array
#include<iostream>
using namespace std;
int main() {
    int x,y;
    cout << "Enter the rows: ";
    cin >> x;
    cout << "Enter the columns: ";
    cin >> y;
    int arr[x][y];
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            cout << "Enter the element of column " << j + 1 << " of row " << i + 1 << " : ";
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < y; i++) {
        for(int j = 0; j < x; j++) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

// If not initialising simultaneoulsy then both rows and columns should be defined)
// If Declaring with Intialising then columns must be defined not necessary that row otherwise error will 
// come 2d Array format is always arr[rows][columns] in which columns are each element in an array which is 
// in array while rows are number of sub arrays which are inside 2D array
// it can be done as int arr[][3] = {{1,2,3},{4,5,6}}; or int[][3] = {1,2,3,4,5,6} 
// or int arr[2][3] = {{1,2,3}{4,5,6}}
// 2D Array is also known as array of array
