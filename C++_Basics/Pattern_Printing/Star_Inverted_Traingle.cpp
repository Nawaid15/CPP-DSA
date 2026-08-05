#include<iostream>
using namespace std;
int main (){
    int m;
    cout << "Enter the number to print star inverted triangle: ";
    cin >> m;// 5
    int j = m;// j = 5
    while(j >= 1) {// 4 >= 1
        for(int i = j; i >= 1; i--) { // i = 5
            cout << "*" << " ";// * * * * * 
        }
        cout << endl;
        j -= 1;
    }
}