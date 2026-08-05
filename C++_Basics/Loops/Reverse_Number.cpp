// more logical method, for all numbers

#include<iostream>
using namespace std;
int main() {
    int x,t;
    cout << "Enter the number to print its reverse: ";
    cin >> x;// 1234
    int r = 0;
    while(x != 0){
        t = x % 10;// 1 
        r *= 10;// 4320
        r += t;// 4321
        x /= 10;//0
    }
    cout << r;
}

//this is mine method only for numbers >= 0

// #include<iostream>
// using namespace std;
// int main() {
//     int x,t;
//     cout << "Enter the number to print its reverse: ";
//     cin >> x;//1234
//     if(x == 0) cout << x;
//     while(x != 0){
//         t = x % 10;//1
//         cout << t;//4321
//         x /= 10;//0
//     }
// }

    