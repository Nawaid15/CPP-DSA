#include<iostream>
using namespace std;
int main() {
    int m;
    cout << "Enter the number to see a alphabet pattern: ";
    cin >> m;
    int i = 1;
    while(i <= m) {
        for(int j = 1; j <= m; j++) {
            cout<< (char)(64 + i) << " ";
        }
        cout << endl ;
        i += 1;
    }
}

// #include<iostream>
// using namespace std;
// int main() {
//     int m;
//     cout << "Enter the number to see a alphabet pattern: ";
//     cin >> m;
//     int i = 1;
//     while(i <= m) {
//         int temp = 64 + i;
//         for(int i = 1; i <= m; i++) {
//             cout<< (char)temp << " ";
//         }
//         cout << endl ;
//         i += 1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int m;
//     cout << "Enter the number to see a alphabet pattern: ";
//     cin >> m;
//     int i = 1;
//     while(i <= m) {
//         for(int i = 97; i <= m + 96; i++) {
//             cout<< (char)i << " ";
//         }
//         cout << endl ;
//         i += 1;
//     }
// }