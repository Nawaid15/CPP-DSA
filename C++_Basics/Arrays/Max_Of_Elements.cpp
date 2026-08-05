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
    int k = arr[0];
    cout << maxnum(arr,k,x,1);
}

// #include<iostream>
// using namespace std;
// int main() {
//     int x,y;
//     cout << "Enter the space of array: ";
//     cin >> x;//5
//     int arr[x];
//     for(int i = 0; i < x; i++) {
//         cout << "Enter the number " << i + 1 << ": "; 
//         cin >> arr[i];//2,1,3
//     }
//     int k = arr[0];
    // for(int j = 1; j < x; j++) {
    //     if(arr[j] > k) {
    //         k = arr[j];
    //     }
//     }
//     cout << "The maximum of values is "<< k;
// }