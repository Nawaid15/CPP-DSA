#include<iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    int* arr = new int[x];
    for(int i = 0; i < x; i++) {
        cout << "Enter element " << i + 1 << " : ";
        cin >> arr[i];
    }
    int repeat = INT_MIN;
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < x; j++) {
            if(arr[i] == arr[j]) {
                repeat = arr[i];
                break;
            }
            else continue;
        }
    }
    cout << "The number " << repeat << " is repeated " << endl;
}