#include<iostream>
using namespace std;
int main() {
    int x,i;
    int n = 0;
    cout << "Enter the number to count its digit: ";
    cin >> x;
    for(i = 1; ; i *= 10) {   // not limit in for loop hence break stament will break the program successfully
        int d = x / i;
        if(d >= 10 || d < -10) {
            n += 1;
            continue; // Jab computer continue; par pahunchta hai, toh woh niche wale poore else block ko chhod deta 
            // hai. Woh seedha upar jaata hai, i *= 10 chalata hai (updation part), aur agla round shuru kar deta hai.
            // Yeh niche ke kisi code par apna time waste nahi karta
        }
        else {
          if(d == 0) {
               n += 1;
               break;
            }
            else {
                n += 1;
                break;
            }
        } 
    }
    cout << "The number of digits is " << n << endl;// not the part of loop
}

// one more method


// #include<iostream>
// using namespace std;
// int main() {
//     int i;
//     cout << "Enter the number: ";
//     cin >> i;
//     int count = 0;
//     while(i > 0) {
//         i = i/10;
//         count ++;
//     }
//     cout << count;
// }

