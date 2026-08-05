#include<iostream>
using namespace std;
int maxnum(int arr[],int x,int y,int j) {
    if(j == y) return x;
    else if(arr[j] > x) {
        x = arr[j];
    }
    j += 1;
    return maxnum(arr,x,y,j);
}
int main() {
    int x;
    cout << "Enter the size of array: ";
    cin >> x;
    int arr[x];
    for(int i = 0; i < x; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    int k = INT_MIN;
    int j = maxnum(arr,k,x,1);
    for(int i = 0; i < x; i++) {
        if(arr[i] != j) {
            if(arr[i] > k) {
                k = arr[i];
            }
        }
    }
    cout << "2nd Maximum number is " << k;
}
