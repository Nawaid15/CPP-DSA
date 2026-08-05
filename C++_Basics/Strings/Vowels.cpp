#include<iostream>
using namespace std;
int main() {
    string x;
    cout << "Enter the string to count the vowels in it: ";
    getline(cin,x);
    int n = x.length();
    char arr[] = {'a','e','i','o','u','A','E','I','O','U'};
    int count = 0;
    for(int j = 0; j < n; j++) {
        for(int i = 0; i < 10; i++) {
            if(x[j] == arr[i]) count += 1;
        }
    }
    cout << "The number of vowels in " << x << " is " << count;
}