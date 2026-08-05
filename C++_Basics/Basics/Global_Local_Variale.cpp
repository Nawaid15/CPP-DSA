// #include<iostream>
// using namespace std;
// int x = 100;
// int main(){
//     cout<< x <<endl;//globale variable accessing inside 
//     x += 100;// increasing value by 100
//     cout<< x <<endl;//output give x=200
//     cout<< x <<endl;
//     int x = 5;//this is local variable
//     cout << x << endl;
//     x = 8;
//     cout << x << endl;
//     // x = x + 2; or we can use as below:
//     x += 2;// first the value becomes x=8+2=10 now updated value of x is x=10
//     x *= 2;// then the value becomes x=10*2=20
//     cout << x << endl; 
// }

// #include<iostream>
// using namespace std;
// int x = 100;
// int main(){
//     int x = 2; 
//     cout << x << endl;// it will print local x which is 2
//     cout << ::x << endl;// it will throw a error if we do not declare a global x else it will print 100
// }

// #include<iostream>
// using namespace std;
// int x = 100; // yahan value define hua global
// int main(){ 
//     int x = 0; // yahan naya variable bana jo ki local hai aur global variable ka value change nhi hua hai
//     cout << x <<endl;
//     cout << ::x;
// }

// #include<iostream>
// using namespace std;
// int x = 100;
// int main(){
//     x = 0; // global variable ka value 100 se 0 hua hai
//     cout << x <<endl; // yahan local variable ka value print hojayega yaani 0  
//     cout << ::x; // yahan par global variable ka value jo ki change kiya tho wohi print hoga yaani 0
// }