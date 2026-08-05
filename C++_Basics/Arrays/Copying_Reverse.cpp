#include<iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter the array size: ";
    cin >> x;
    int arr[x];
    int arr2[x];
    for(int i = 0; i < x; i++) {
        cout << "Enter the element " << i + 1 << " :";
        cin >> arr[i];
        arr2[x-i-1] = arr[i];
    }
    for(int i = 0 ; i < x; i++) {
        cout << arr2[i] << " ";
    }
    
}