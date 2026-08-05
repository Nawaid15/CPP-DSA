#include<iostream>
using namespace std;
int main() {
    int x1,x2,y1,y2,a,b;
    cout << "Enter the number of rows: ";
    cin >> b;
    cout << "Enter the number of columns: ";
    cin >> a;
    cout << "Enter x cordinate for cordinate 1: ";
    cin >> x1;//2
    if(x1 > a) cout << "The rectangle reaches out of the array";
    else {
        cout << "Enter y cordinate for cordinate 1: ";
        cin >> y1;//2
        if(y1 > b) cout << "The rectangle reaches out of the array";
        else {
            cout << "Enter x cordinate for cordinate 2: ";
            cin >> x2;//4
            if(x2 > a) cout << "The rectangle reaches out of the array";
            else if(x2 < x1) cout << "The end point targeted to make a rectangle is behind the starting point"; 
            else {
                cout << "Enter y cordinate for cordinate 2: ";
                cin >> y2;//4
                if(y2 > b) cout << "The rectangle reaches out of the array";
                else if(y2 < y1) cout << "The end point targeted to make a rectangle is behind the starting point";
                else {
                    int arr[b][a];
                    for(int i = 0; i < b; i++) {
                        for(int j = 0; j < a; j++) {
                            cout << "Enter the element of column " << j + 1 << " of row " << i + 1 << " : ";
                            cin >> arr[i][j];
                        }
                    }
                    int sum = 0;
                    for(int i = y1-1; i < y2; i++) {//3
                        for(int j = x1-1; j < x2; j++) {//3
                            sum = sum + arr[i][j];//sum = 9
                        }
                    }
                    for(int i = 0; i < b; i++) {
                        for(int j = 0; j < a; j++) {
                            cout << arr[i][j] << " ";
                        }
                        cout << endl;
                    }
                    cout << "The sum of rectange from cordinates " << x1 << " and " << y1 << " to coordinates " << x2 << " and " << y2 << " is " << sum << endl;
                } 
            }
        }
    }
}
// 1  2  3 5
// 4  5  6 18
// 7  8  9 19
// 10 11 12 8
// 2  3  4  5