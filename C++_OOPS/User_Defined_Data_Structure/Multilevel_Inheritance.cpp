#include<iostream>
using namespace std;

class Vehicle {
public:
    int price;
    int mileage;
    string name;
};

class TwoWheeler : public Vehicle {
public:
    int seatsize;
};

class Scooty : public TwoWheeler {
public:
    int gears;
}; 

class Bike : public TwoWheeler {
public:
    int gears;
};

class FourWheeler : public Vehicle {
public:
    int seat;
};

class Car : public FourWheeler {
public:
    bool sunroof;
};

int main() {
    Bike b1;
    b1.seatsize = 6;
    Car c1;
    c1.seat = 6;
    c1.sunroof = false;
    cout << c1.sunroof;
}