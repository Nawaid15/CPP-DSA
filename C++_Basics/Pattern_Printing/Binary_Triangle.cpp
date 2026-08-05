#include<iostream>
using namespace std;
int main() {
    int m,i;
    cout << "Enter the number to print star triangle: ";
    cin >> m;
    for(int j = 1; j <= m; j++) { 
        for(i = 1; i <= j; i++) {
            if((i + j) % 2 == 0) cout << 1 << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
}




// mine method not the fastest method


// #include<iostream>
// using namespace std;
// int main (){
//     int m;
//     cout << "Enter the number to print binary triangle: ";
//     cin >> m;
//     int j = 1;
//     int k = 1;
//     while(j <= m) {
//         for(int i = 1; i <= j; i++) {
//             if(j % 2 != 0) {
//                 if(i % 2 != 0) cout << k << " ";
//                 else {
//                     cout << k - 1 << " ";
//                 }
//             }
//             else {
//                 if(i % 2 == 0) cout << k << " ";
//                 else {
//                     cout << k - 1 << " ";
//                 }
//             }
//         }
//         cout << endl;
//         j += 1;
//     }
// }

