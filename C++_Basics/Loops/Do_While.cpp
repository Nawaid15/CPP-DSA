#include<iostream>
using namespace std;
int main() {
    int i = 1; // if here int i = 11 then also as in while loop it will run one time but so 11 will be printed and 
    //nothing else 
    do {
        cout << i << " ";
        i += 1;
    } while(i <= 10);
}