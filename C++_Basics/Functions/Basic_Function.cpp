#include<iostream>
using namespace std;
int india() {
    int x = 11;
    cout << "You are in India" << endl;
    return x;
}
void usa() {
    cout << "You are in USA" << endl;
    int x = 12;
    india();
    int y = india();
    cout << y;
    x += 1;
    cout << x;
}
int main() {
    usa();
    cout << "You are in main";
    int x = 30;
    cout << x;
}