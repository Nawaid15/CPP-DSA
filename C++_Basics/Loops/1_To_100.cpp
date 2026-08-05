#include<iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter the number to print til that: ";
    cin >> x;
    for(int i = 1; i <= x; i++) {
        cout << i <<endl;
    }
}