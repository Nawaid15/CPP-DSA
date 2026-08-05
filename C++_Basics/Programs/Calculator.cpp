#include<iostream>
using namespace std;
int main(){
    float x,y;
    cin >> x;
    char z;
    cin >> z;
    cin >> y;
    if(z == '+') cout << x + y;
    else if(z == '-') cout << x - y;
    else if(z == '*') cout << x * y;
    else if(z == '/') cout << x / y;
    else cout << "Invalid Operation";
}