#include<iostream>
using namespace std;
int main() {
    int x,s,t;
    cout << "Enter the number to print its sum of even digits: ";
    cin >> x;
    int sum = 0;
    while(x != 0){
        t = x % 10;
        if(t % 2 == 0) sum += t;
        x /= 10;
    }
    cout << sum;
}
