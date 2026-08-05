#include<iostream>
using namespace std;
int main() {
    int x = 4;
    int y = 9;
    x = x + y;
    y = x - y;
    x = x - y;
    cout << x << endl;
    cout << y << endl;
}
// x = x + y
// y = x - y
// x = x - y