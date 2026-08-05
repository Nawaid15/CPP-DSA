#include<iostream>
using namespace std;
int main() {
    int x = 3;
    cout << &x ;// while running each time it takes different location of spaces in ram hence both time 
                //running it printed twodifferent addresses
}               //0x9e1d3ff69c (1st time)
                //0x162bfffc0c (2nd time)