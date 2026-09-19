#include<iostream>
using namespace std;

void bubblesort(int arr[],int size) {
    for(int i = size-1; i > 0; i--) {
        for(int j = 0; j < i; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void selectionsort(int arr[],int size) {
    int minIndex;
    for(int j = 0; j < size; j++) {
        minIndex = j;
        for(int i = j; i < size; i++) {
            if(arr[minIndex] > arr[i]) {
                minIndex = i;
            }
        }
        int temp = arr[j];
        arr[j] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

    void insertionsort(int arr[],int size) {
        for(int j = 1; j < size; j++) {
            int k = j;
            while(arr[k] < arr[k-1]) {
                int temp = arr[k];
                arr[k] = arr[k-1];
                arr[k-1] = temp;
                if(k-1 == 0) break;
                k--;
            }
        }
    }

int main() {
    int arr[] = {4,2,6,5,1,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,size);
    cout << "Result of Bubble Sort :- ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    selectionsort(arr,size);
    cout << "Result of Selection Sort :- ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }    
    cout << endl;
    insertionsort(arr,size);
    cout << "Result of Insertion Sort :- ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}