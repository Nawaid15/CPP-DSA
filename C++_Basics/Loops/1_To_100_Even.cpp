#include<iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter the number to print even number till it: ";
    cin >> x;
    for(int i = 1; i <= x; i++) {
        if(i % 2 == 0) {
            cout << i << " ";
        }
    }
}

// one more way to print the same thing
// #include<iostream>
// using namespace std;
// int main(){
//    int x;
//    cout << "Enter the number to print even number till it: ";
//    cin >> x;
//    for(int i = 0; i <= x; i += 2) {
//     cout << i << " ";
//     }
// }