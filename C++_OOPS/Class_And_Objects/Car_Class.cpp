#include<iostream>
#include<string>
using namespace std;
class Car {
public:
    string name;
    string type;
    int price;
    int seat;
};
void PrintClass(Car c) {
    cout << c.name << " " << c.price << " " << c.type << " " << c.seat << " " << endl;
}
int main() {
    Car c1;
    c1.name = "Honda City";
    c1.price = 1500000;
    c1.type = "Sedan";
    c1.seat = 5;
    Car c2;
    c2.name = "Mahindra Thar";
    c2.price = 2000000;
    c2.type = "SUV";
    c2.seat = 5;
    Car c3;
    c3.name = "Maruti Baleno";
    c3.price = 1100000;
    c3.type = "Hatchback";
    c3.seat = 5;
    PrintClass(c1);
    PrintClass(c2);
    PrintClass(c3);
    // cout << c1.name << " " << c1.price << " " << c1.type << " " << c1.seat << " " << endl;
    // cout << c2.name << " " << c2.price << " " << c2.type << " " << c2.seat << " " << endl;
    // cout << c3.name << " " << c3.price << " " << c3.type << " " << c3.seat << " " << endl; 
    // instead of this lengthy method we can create a function to pass these values and print it
}