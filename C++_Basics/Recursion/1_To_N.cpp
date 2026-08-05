// #include<iostream>
// using namespace std;
// void print(int n,int x) {  
//     if (x > n) return;
//     cout << x << endl;
//     x += 1;
//     print(n,x);
// }
// int main() {
//     int k;
//     cout << "Enter the number: ";
//     cin >> k;
//     int x = 1;
//     print(k,x);
// } 

//without extra parameter

// #include<iostream>
// using namespace std;
// int x;
// void print(int n) { // n = 3 
//     if(n == 1) {
//         cout << "Enter the number: ";
//         cin >> x;//100
//     }
//     cout << n << endl;// n = 3
//     n += 1;// n = 4
//     if(n > x) return;// 4 > 100
//     print(n); // print(4)
// }
// int main() {
//     print(1);
// } 

// best method and most conceptual this contain concept of recursion and return keyword

#include<iostream>
using namespace std;
void print(int n) {
    if(n == 0) return;// base case  These three steps are main in recursion
    print(n-1);// call
    cout << n << endl;// work
}
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    print(n);
}