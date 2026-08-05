//more proffesional method (This code is also improved by mine)

#include<iostream>
using namespace std;
int main() {
    int x;
    bool flag = true;
    cout << "Enter a number: ";
    cin >> x;
    for(int i = 2; i < x; i++) {
        if(x % i == 0) {
            flag = false;
            break;
        }
    }
    if (flag == true && (x > 1)) {
        cout << x << " is a prime number";
    }
    else if(x <= 1) {
        cout << x << " is neither a prime nor composite";
    }
    else {
        cout << x << " is a composite number";
    } 
}

// mine method

// #include<iostream>
// using namespace std;
// int main() {
//     int x,k;
//     cout << "Enter the number: ";
//     cin >> x;
//     for(int i = x - 1; i >= 1; i--) {
//         if(x % i == 0) {
//             k = i;
//             break;
//             }
//     }
//     if(k == 1 || x <= 1) {
//         cout << x << " is not a composite number";
//     } 
//     else {
//         cout << x << " is a composite number" << endl;
//     }
// }


