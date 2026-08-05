#include<iostream>
using namespace std;
int main() {
    int x,h;
    cout << "Enter a number: ";
    cin >> x;
    for(int i = 1; i < x; i++) {
        if(x % i == 0) {
            h = i;
        }
    }
    cout << "Highest Factor of number is " << h << endl;
}

// one more method! by reverse loop

// #include<iostream>
// using namespace std;
// int main() {
//     int x,h;
//     cout << "Enter a number: ";
//     cin >> x;
//     for(int i = x - 1; i >= 1; i--) {
//         if(x % i == 0) {
//             h = i;
//             cout << "Highest Factor of number is " << h << endl;
//             break; // to get out of a loop
//         }
//     }
// }