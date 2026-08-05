// #include<iostream>
// using namespace std;
// int x = 0;
// int sumnum(int n) {
//     if(n == 0) return n;
//     sumnum(n - 1);//1,2,3
//     x += n;// x=6
//     return x;
// }
// int main() {
//     int x;
//     cout << "Enter the number to print sum till that number: ";
//     cin >> x;//x=3
//     cout << sumnum(x);//3
// }

// more better logical and conceptual method
#include<iostream>
using namespace std;
int sum(int n){
    if (n == 1) return 1; 
    return n + sum(n-1);
}
int main() {
    int x;
    cout << "Enter the number to print sum till that number: ";
    cin >> x;
    cout << sum(x);
}