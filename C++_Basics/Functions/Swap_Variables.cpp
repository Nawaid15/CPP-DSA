#include<iostream>
using namespace std;
#include"My_Library.h"
int main() {
    int x,y;
    cout << "Enter the number 1: "; 
    cin >> x;
    cout << "Enter the number 2: ";
    cin >> y;
    // cout << &x << " " << &y << endl; 
    swap(x,y);
    // cout << &x << " " << &y << endl;
}
//Pass By Value and Pass By Reference

//In Pass By Value, new variable containers is created and they swap their values while the 
//original one is unchanged hence pass by value has a problem

//The Pass By Reference, solves this problem and it has two ways:-
//1st Way :- by using int& instead of int in defining variables at parmeter in function, what this will
//           do is that no new variables will be created and function will swap the original values of
//           x and y 
//2nd Way :- 
