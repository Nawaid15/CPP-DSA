#include<iostream>
using namespace std;
int main() {
    int x,s,t;
    cout << "Enter the number to print its sum of digits: ";
    cin >> x;
    int sum = 0;
    while(x != 0){
        t = x % 10;
        sum += t;
        x /= 10;
    }
    cout << sum;
}
// My practice which gone wrong
// #include<iostream>
// using namespace std;
// int main() {
//     int x,d,h;
//     cout << "Enter the number to print its sum of digits: ";
//     cin >> x; // 1111
//     for(int i = 10; ; i *= 10) {   //i=1000
//         d = x % i; // d=111
//         if(d > 10) {
//             d = d % (i/10) + (d - d % (i/10))/(i/10);  // d=2
//         }
//         h = ((x - (x % i))/i) % i;// h=1
//         d = d + h;// 2+1=3
//         if((x / i) < 10) break; //1111/100 = 11<10 false
//         else continue; //
//     }
//     cout << d;
// }




