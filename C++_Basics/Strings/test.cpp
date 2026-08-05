// #include<iostream>
// using namespace std;
// int main() {
//     // int x = 5;
//     // int* a = &x;
//     // int** q = &a;
//     // cout << **q << endl;
//     // int* p = new int;
//     // cin >> *p;
//     // cout << *p;
//     int arr[] = {10,20,30,40};
//     int *p = arr;
//     cout << p << endl;
//     cout << *p << endl;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int matrix[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };
    
//     // Transpose karne wala loop
//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 3; j++) {
//             int temp = matrix[i][j];
//             matrix[i][j] = matrix[j][i];
//             matrix[j][i] = temp;
//         }
//     }
    
//     // Printing the matrix
//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 3; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

#include<iostream>
using namespace std;

int main() {
    string str = "coding";
    int i = 0;
    int j = str.length() - 1;
    
    while(i < j) {
        str[i] = str[j];
        str[j] = str[i];
        i++;
        j--;
    }
    cout << str;
}
