#include<iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter the size of array: ";
    int sumeven = 0;
    int sumodd = 0;
    cin >> x;
    int arr[x];
    for(int i = 0; i < x; i++) {
        cout << "Enter the element " << i + 1 << ": ";
        cin >> arr[i];
        if(i % 2 == 0) {
            sumeven += arr[i];
        }
        else sumodd += arr[i];
    }
    cout << "" << sumeven-sumodd;
}