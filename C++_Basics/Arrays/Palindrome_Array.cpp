#include<iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter the size of array: ";
    cin >> x;
    int arr[x]; 
    bool ispalindrome = true;
    for(int i = 0; i < x; i++) {
        cout << "Enter the element " << i + 1 << " : ";
        cin >> arr[i];
    }
    for(int i = 0; i < x; i++) {
        if(arr[i] != arr[x-i-1]) ispalindrome = false; 
        else ispalindrome = true;
    }
    if(ispalindrome == true) cout << "The array is a palindorme";
    else cout << "The array is not a palindrome";
}