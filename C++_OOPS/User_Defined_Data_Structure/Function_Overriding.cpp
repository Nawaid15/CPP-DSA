#include<iostream>
using namespace std;

class Scooty {
public:
    float mileage;
    int topSpeed;
        void sound() {
        cout << "Vroom Vroom" << endl;
    }

private:
    int bootSpace;
};

class Bike : public Scooty {
public:
    int gears;
    virtual void sound() {
        cout << "Dhroom Dhroom" << endl;
    }
};

class SuperBike : public Bike {
public:
    void sound() {
        cout << "Zroom Zroom" << endl;
    }
};

int main() {
    Bike* b = new SuperBike;
    b->sound();
    Scooty* s = b;
    s->sound();
    cout << s << " " << b << endl;
}