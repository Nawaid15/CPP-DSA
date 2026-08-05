#include<iostream>
using namespace std;
int main(){
    float x,y;
    cin >> x;
    char z;
    cin >> z;
    cin >> y;
    switch(z) {
        case '+':
        cout << x + y << endl;
        break;
        case '-':
        cout << x - y << endl;
        break;
        case '*':
        cout << x * y << endl;
        break;
        case '/':
        cout << x / y << endl;
        break;
        default :
        cout << "Invalid Operation" <<endl;
        break;
    }
}