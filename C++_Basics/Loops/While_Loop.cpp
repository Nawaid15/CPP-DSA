// #include<iostream>
// using namespace std;
// int main() {
//     int i = 1;
//     while(i <= 10) {
//         cout << i << " ";
//         i += 1;
//     } 
// }

//we can also use for loop in this syntax
// #include<iostream>
// using namespace std;
// int main() {
//     int i = 1;
//     for(;i <= 10;) {
//         cout << i << " ";
//         i += 1;
//     } 
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int i = 1;
//     while(i == 1) 
//         i += 1;
//         cout << i << " ";
// }

//Tum soch rahe the ki kyunki cout independent hai, toh use i ki purani value (1) dikhni chahiye. 
//Lekin variable ka matlab hi yahi hota hai ki agar ek baar memory mein value badal gayi (i += 1; 
//chalne ki wajah se), toh uske baad pure program mein har independent line ko badli hui tazi value 
//(Updated value) hi dikhegi.

// #include<iostream>
// using namespace std;
// int main() {
//     int i; // garbage value
//     while(i = 1) { // inside while condition i is assigned 1 hence no matter what will be the garbage value it will
//         // be setted to 1
//         cout << i << " ";
//         i += 1;// i value changed but again i value was assigned to 1 hence infinite 1 will appear in screen
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int x = 4 , y = 0;
//     while(x >= 0) {
//         x --;
//         y ++;
//         if(x == y) continue;
//         else {
//             cout << x << " " << y << endl;
//         }
//     }
// }
