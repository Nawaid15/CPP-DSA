#include<iostream>
using namespace std;
int main() {
    int n;
    int x[n];// declaration
    cout << "Enter array space you want: ";
    cin >> n;
    for(int i = 0; i <= n-1; i++){// initialising by loop
        cout << "Enter element "<< i + 1 << ": ";
        cin >>  x[i];
    }
    for(int i = 0; i <= n-1; i++){// printing by loop
        cout << x[i] << " ";
    }
}

// declaration plus initialisation 
// int arr[6] = {4,2,3,1,4}; // it can also be as int arr[] = {4,2,3,1,4} no need of mentioning size if 
// it is initialised but square bracket is necessary to recognise it as array , no need of mentioning space
// inside square bracket if you have initialised after it there will be no error
