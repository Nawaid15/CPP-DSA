#include<iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter the array size: ";
    cin >> x;
    int arr[x];
    for(int i = 0; i < x; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i]; 
        if(i % 2== 0) {
            arr[i] += 10;    
        }
        else arr[i] *= 2;
    }
    for(int i = 1; i < x; i++) {
        cout << arr[i] << " ";
    }
}