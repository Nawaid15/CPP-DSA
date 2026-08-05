#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the nth term to print odd number: ";
    cin >> n;
    for(int i = 1; i <= (2 * n - 1); i += 2) {
        cout << i << " ";
    }
}

// To calculate any AP we can write code using similar logic:-

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the nth term to print AP: ";
//     cin >> n;
//     for(int i = 4; i <= (3 * n + 1); i += 3) {
//         cout << i << " ";
//     }
// }

//                  OR

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     int a = 4;
//     cout << "Enter the nth term to print AP: ";
//     cin >> n;
//     for(int i = 1; i <= n; i++) {
//         cout << a << " ";
//         a += 3;
//     }
// }