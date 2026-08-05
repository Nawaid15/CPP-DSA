#include<iostream>
using namespace std;
int main(){
    char x;
    cin >> x;
    switch(x) {
        case '1':
        cout << "Sunday";
        break;
        case '2':
        cout << "Monday";
        break;
        case '3':
        cout << "Tuesday";
        break;
        case '4':
        cout << "Wednesday";
        break;
        case '5':
        cout << "Thursday";
        break;
        case '6':
        cout << "Friday";
        break;
        case '7':
        cout << "Saturday";
        break;
        default :
        cout << "Week has only 7 days";
        break;
    }
}