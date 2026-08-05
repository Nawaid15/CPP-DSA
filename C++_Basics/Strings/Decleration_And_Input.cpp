#include<iostream>
using namespace std;
int main() {
    string x;
    cout << "Enter the string: ";
    getline(cin,x);
    cout << x;
}
// Character arrays are strings but by using array it is difficult to operate hence built in datatype string 
// is used but in string too using cin meaning if we are taking input from user we only get first element if there 
// are multiple words with gaps hence this is a problem of cin not of strings if we use cin for takng input
// cin is designed in this way that if it finds any whitespace character(spaces,tabs,or enter) then it thinks
// that this variable's value is ended here only and after space the value is of next variable it doesnot treat
// both values as same the whitespace charcters breaks the cin input hence we use getline which does not took 
// space as a boundry for data 


// Difference beteen a Normal Array and String :-
// Normal char Array: Yeh ziddi aur fixed size ka hota hai (Static allocation). Agar aapne char name[5] banaya, 
// toh usme 5 se bada text nahi aa sakta.Standard string: Yeh ek automatic Dynamic Array hai. Jab aap text 
// badhate jate ho, yeh background mein khud memory reallocation karke apni size ko auto-scale kar leta hai. 
// Aapko manually pointer arithmetic lagane ki zaroorat nahi padti.

// char is normal character varible which can be defined and its value can be cahnged it does not retains its value 
// const char is read only variable in which no you cannot change its value and static char will retain its older 
// value if you hsve putted in it a newer value in function call
// and static char or const static char or static const char these two are almost same thing which does both of
// the things described above using both simultaneosly it will result in unchangeable global constant


