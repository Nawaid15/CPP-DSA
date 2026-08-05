#include<iostream>
using namespace std;
int j = 1;
int minnum(int arr[],int x,int y) {
    if(j == y) return x;
    else if(arr[j] < x) {
        x = arr[j];
    }
    j += 1;
    return minnum(arr,x,y);
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
    int k = arr[0];
    cout << minnum(arr,k,x);
}