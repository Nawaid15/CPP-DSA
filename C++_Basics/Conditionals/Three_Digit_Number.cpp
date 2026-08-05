#include<iostream>
using namespace std;
int main(){
    float x;
    cout << "Enter a number: ";
    cin >> x;
    if(99 < x and x < 1000) cout << "The number is three digit";// and ki jagah pe && bhi likh sakte hai ye sab ek logical opertaor hai
    else cout << "The number is not a three digit";
}