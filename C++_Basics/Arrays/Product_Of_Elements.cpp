#include<iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter the space of array: ";
    cin >> x;
    int arr[x];
    int product = 1;
    for(int i = 0; i < x; i++) {
        cout << "Enter the number " << i + 1 << ": "; 
        cin >> arr[i];
        product *= arr[i];
    }
    cout << product;
}