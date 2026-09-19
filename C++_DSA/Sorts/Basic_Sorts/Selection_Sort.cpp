#include<iostream>
using namespace std;
template<size_t N>

void SelectionSort(int (&arr)[N]) {
    for(int i = 0; i < N; i++) {
        int minIndex = i;
        for(int j = i+1; j < N; j++) {
            if(arr[minIndex] > arr[j]) {
                minIndex = j;
            }
        }
        if(minIndex != i) {
            int temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
        }
    }
}

int main() {
    int arr[] = {3,5,1,4,2,6};
    for(auto value : arr) {
        cout << value << " ";
    }
    cout << endl;
    SelectionSort(arr);
    for(auto value : arr) {
        cout << value << " ";
    }
}