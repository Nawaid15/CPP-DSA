#include<iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter the space of array: ";
    cin >> x;
    int arr[x];
    int sum = 0;
    for(int i = 0; i <= x - 1; i++) {
        cout << "Enter the number " << i + 1<< ": "; 
        cin >> arr[i];
        sum  += arr[i];
    }
    cout << sum;
}

