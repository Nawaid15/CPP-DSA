//another method
#include<iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter size of array: ";
    cin >> x;
    int arr[x];
    for(int i = 0; i < x; i++) {
        cout << "Enter the element " << i + 1 << " : ";
        cin >> arr[i];
    }
    int y,k;
    int i = 1;
    while(i < x) {
        k = arr[i];
        y = arr[x-i-1];
        y = y + k;
        k = y - k;
        y = y - k;
        i += 1;
    }
    for(int i = 0; i < x; i++) {
        cout << arr[i] << " ";
    }
}          

//my method
// #include<iostream>
// using namespace std;
// int main() {
//     int x;
//     cout << "Enter size of array: ";
//     cin >> x;
//     int arr[x];
//     for(int i = 0; i < x; i++) {
//         cout << "Enter the element " << i + 1 << " : ";
//         cin >> arr[i];
//     }
//     for(int i = x - 1; i >= 0; i--) {
//         cout << arr[i] << " ";
//     }      
// }