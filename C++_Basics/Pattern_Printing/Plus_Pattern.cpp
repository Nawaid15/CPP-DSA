// better method

#include<iostream>
using namespace std;
int main() {
    int x,j;
    cout << "Enter the number to print plus pattern: ";
    cin >> x;
    int mid = x/2 + 1;
    for(int i = 1; i <= x; i++) {
        for(j = 1; j <= x; j++) {
            if(i == mid || j == mid) cout << "* ";
            else cout << "  ";
        }
        cout << endl; 
    }
}


// my method

// #include<iostream>
// using namespace std;
// int main() {
//     int x,j;
//     cout << "Enter the number to print plus pattern: ";
//     cin >> x;//5
//     for(int i = 1; i <= x; i++) {
//         if(i == ((x + 1)/2)) {
//             for(j = 1; j <=x; j++) {
//                 cout << "* ";
//             }
//         }
//         else {
//             for(j = 1; j <= x; j++) {
//                 if(j == ((x + 1)/2)) cout << "* ";
//                 else cout << "  ";
//             }
//         }
//         cout << endl;
//     }
// }