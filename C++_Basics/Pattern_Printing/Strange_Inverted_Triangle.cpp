// my method 

#include<iostream>
using namespace std;
int main() {
    int x,j;
    cout << "Enter the number to print strange inverted triangle: ";
    cin >> x;
    for(int i = 1; i <= x; i++) {
        for(j = 1; j <= x; j++) {
            if(j <= (x - i)) cout << "  ";
            else cout << "* ";
        }
        cout << endl; 
    }
}

// two loops in one loop

// #include<iostream>
// using namespace std;
// int main() {
//     int x,j;
//     cout << "Enter the number to print plus pattern: ";
//     cin >> x;
//     for(int i = 1; i <= x; i++) {
//         for(j = 1; j <= x - i; j++) {
//             cout << "  ";
//         }
//         for(j = 1; j <= i; j++) {
//             cout << "* ";
//         }
//         cout << endl; 
//     }
// }
