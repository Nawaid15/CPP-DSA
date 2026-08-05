// #include<iostream>
// using namespace std;
// int main() {
//     int x,j;
//     int k = 1;
//     int a = 1;
//     cout << "Enter the number to print Floyd's Triangle: ";
//     cin >> x;
//     for(int i = 1; i <= x; i++) {
//         for(j = k; a <= i; j++) { 
//             cout << j << " ";
//             a += 1;
//             k = j;
//         }
//         cout << endl;
//         a = 1;
//         k += 1;
//     } 
// }
 
// I made it aagain now by using 4 variables rather than 5

#include<iostream>
using namespace std;
int main() {
    int x,j;
    int a = 0;
    cout << "Enter the number to print Floyd's Triangle: ";
    cin >> x;
    for(int i = 1; i <= x; i++) {
        for(j = 1; j <= i; j++) { 
            cout << a + j<< " ";
        }
        cout << endl;
        a += i;
    } 
}




