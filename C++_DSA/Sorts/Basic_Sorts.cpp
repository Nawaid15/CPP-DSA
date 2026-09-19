#include<iostream>
using namespace std;

void bubblesort(int arr[],int size) {
    for(int j = size-1; j > 0; j--) {
        for(int i = 0; i < j; i++) {
            if(arr[i] > arr[i+1]) {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {3,4,2,1,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,size);
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    } 
}