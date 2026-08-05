#include<iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter the number to print square till that number: ";
    cin >> x;
    int arr[x];
    int y = 1;
    for(int i = 0; i < x; i++) {
        arr[i] = y * y;
        y += 1;
    }
    for(int i = 0; i < x; i++) {
        cout << arr[i] << " ";
    }
}