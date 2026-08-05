#include<iostream>
using namespace std;
int main() {
    int x,y;
    cout << "Enter the array size: ";
    cin >> x;
    int arr[x];
    int count = 0;
    cout << "Enter the number to count elements greater than it: ";
    cin >> y;
    for(int i = 0; i < x; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
        if(arr[i] > y) count += 1;
    }
    cout << "The number of elements greater than " << y << " is " << count;
}