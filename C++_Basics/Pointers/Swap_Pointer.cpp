#include<iostream>
using namespace std;
#include"My_Library.h"
int main() {
    int x,y;
    cout << "Enter the number 1: "; 
    cin >> x;
    cout << "Enter the number 2: ";
    cin >> y;
    pswap(&x,&y); // sending address
}