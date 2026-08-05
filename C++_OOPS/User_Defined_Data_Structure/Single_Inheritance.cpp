#include<iostream>
using namespace std;

class Scooty { // parent class
public:
    int topSpeed;
    float mileage;

    Scooty() {

    }

    Scooty(int topSpeed, float mileage, int bootSpace ) {
        this-> topSpeed = topSpeed;
        this-> mileage = mileage;
        this-> bootSpace = bootSpace;
    }

    void setbootSpace(int n) { // setter
        if(n > 0) this->bootSpace = n;
        else cout << "Invalid" << endl;
    }

    int getbootSpace() { // getter
        return bootSpace;
    }

private:
    int bootSpace;
};

class Bike : public Scooty{ // child class/derived class
public:
    int gears;
};

int main() {
    Scooty s1(180,22.5,10);
    s1.getbootSpace();
    Bike b1;
    b1.setbootSpace(10);
    b1.topSpeed = 180;
    cout << b1.getbootSpace() << endl;
    b1.setbootSpace(10);
    cout << b1.getbootSpace() << endl;
    b1.setbootSpace(20);
    cout << b1.getbootSpace() << endl;
    b1.setbootSpace(-10);
    cout << b1.getbootSpace() << endl;
}

