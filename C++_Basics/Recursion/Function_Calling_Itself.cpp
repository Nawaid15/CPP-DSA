#include<iostream>
using namespace std;
void greet(int n) {
    if(n == 0) return;// this will end the loop
    cout << n <<endl;
    greet(n-1);
}
int main() {
    greet(3);
}

// Function calling itself is called Recursion
// This method can also be used instead of for loop 