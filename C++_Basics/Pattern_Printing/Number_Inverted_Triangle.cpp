#include<iostream>
using namespace std;
int main (){
    int m;
    cout << "Enter the number to print number inverted triangle: ";
    cin >> m;
    int j = m;
    while(j >= 1) {
        for(int i = j; i >= 1; i--) {
            cout << i << " "; 
        }
        cout << endl;
        j -= 1;
    }
}