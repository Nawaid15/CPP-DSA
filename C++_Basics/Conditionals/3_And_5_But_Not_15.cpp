#include<iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter the number: ";
    cin >> x;
    if((x % 5 == 0 || x % 3 == 0) && x % 15 != 0) cout << "The number is divisible by 5 or 3 but not by 15";
    else cout << "The number is not as per the condition";
}