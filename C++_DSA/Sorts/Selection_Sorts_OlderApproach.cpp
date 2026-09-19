#include<iostream>
using namespace std;

void SelectionSort(int arr[],int size) {
    int minIndex = 0;
    int minNum = arr[0];
    int change = minIndex; 
    for(int j = 0; j < size; j++) {
        minIndex = j;
        minNum = arr[j];
        for(int i = j; i < size; i++) {
            if(i+1 >= size) break;
            if(minNum > arr[i+1]) {
                minIndex = i+1;
                minNum = arr[i+1];
            }
        }
        if(change != minIndex) {
            int temp = arr[j];
            arr[j] = arr[minIndex];
            arr[minIndex] = temp;
        }
        change = minIndex;
    }
}

int main() {
    int arr[] = {3,6,4,5,1,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(auto value : arr) {
        cout << value << " ";
    }
    cout << endl;
    SelectionSort(arr,size);
    for(auto value : arr) {
        cout << value << " ";
    }
}