#include<iostream>
using namespace std;
int main() {
    int x = 4535;
    string s = to_string(x);
    s += "dd";
    cout << s << endl;
    string str = "2312";
    // converting string to integer
    int y = stoi(str) + 1;
    cout << y;
}
