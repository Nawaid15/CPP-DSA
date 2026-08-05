#include<iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter a positive number:" ;
    cin >> x;
    if(x % 2 == 0) cout << "The number is Even";
    else {cout << "The number is Odd" <<endl;
         cout << "wow"; }
}