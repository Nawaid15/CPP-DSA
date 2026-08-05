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
void changeClass(Car* c) {
    (*c).name = "Audi A8";
    (*c).price = 3500000;
    c->type = "Sedan"; // or (*c).type = "Sedan"; both means same
    (*c).seat = 5; // pass by reference can either be done by Car& or pointers
}
int main() {
    Car c3;
    c3.name = "Maruti Baleno";
    c3.price = 1100000;
    c3.type = "Hatchback";
    c3.seat = 5;
    PrintClass(c3);
    changeClass(&c3);
    PrintClass(c3);// no changes hence pass by value if I would have not used pointer but now there is 
    // pass by reference
    Car* p = &c3;
    cout << (*p).seat << endl;
    cout << p->seat << endl;// both are same but '->' this is used for pointers 
}