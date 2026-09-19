#include<iostream>
using namespace std;
template <size_t N>

void InsertionSort(int (&arr)[N]){
    for(int i = 0; i < N; i++) {
        int minIndex = 0;
        for(int j = 0; j < N; j++) {
            if(j+1 >= N) break;
            if(arr[minIndex] > arr[j+1]) {
                int temp = arr[minIndex];
                arr[minIndex] = arr[j+1];
                arr[j+1] = temp;
                minIndex = j+1;
            }
        }
    }   
}

int main() {
    int arr[] = {6,2,3,5,4,1};
    for(auto value : arr) {
        cout << value << " ";
    }
    cout << endl;
    InsertionSort(arr);
    for(auto value : arr) {
        cout << value << " ";
    }
}