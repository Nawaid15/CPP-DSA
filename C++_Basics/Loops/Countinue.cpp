//by using continue statement

#include<iostream>
using namespace std;
int main() {
    for(int i = 1; i <= 20; i++) {
        if(i == 3 || i == 8) continue;
        else {
            cout << i << " ";
        }
    }
}
    
//another method

// #include<iostream>
// using namespace std;
// int main() {
//     for(int i = 1; i <= 20; i++) {
//         if(i != 3 && i != 8) 
//             cout << i << " ";
//     }
// }