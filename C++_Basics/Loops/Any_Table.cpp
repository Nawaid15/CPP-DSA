#include<iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter the number to print its table: ";
    cin >> x;
    for(int i = 1; i <= 10; i++)
    cout << x << " * " << i << " = " << x * i << endl;
}

// if we only want to print the table of 19 then there are two ways :-

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i = 19; i <= 190; i++) {
//         if(i % 19 == 0) {
//             cout << i << " ";
//         }
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     for(int i = 19; i <= 190; i += 19) {
//             cout << i << " ";
//     }  
// }



