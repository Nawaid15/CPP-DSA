#include<iostream>
using namespace std;

// Base Class
class Scooty {
public:
    float mileage;
    int topSpeed;
    
    // 'virtual' enables Runtime Polymorphism. 
    // It tells the compiler to look at the actual object type, not the pointer type.
    virtual void sound() {
        cout << "Vroom Vroom" << endl;
    }

private:
    int bootSpace; // Private member: only accessible within Scooty class
};

// Derived Class 1 (Inherits from Scooty)
class Bike : public Scooty {
public:
    int gears;
    
    // Overriding the sound() method. 
    // It is automatically 'virtual' here because it was virtual in the parent class.
    void sound() {
        cout << "Dhroom Dhroom" << endl;
    }
};

// Derived Class 2 (Inherits from Bike)
class SuperBike : public Bike {
public:
    // Overriding the sound() method again. Explicitly using 'virtual' is optional but allowed.
    virtual void sound() {
        cout << "Zroom Zroom" << endl;
    }
};

int main() {
    // 1. Polymorphism: Parent pointer ('Bike*') points to a child object ('SuperBike')
    Bike* b = new SuperBike;
    
    // 2. Virtual Function Resolution: Because sound() is virtual, C++ looks at the 
    // actual object type (SuperBike) at runtime. Outputs: "Zroom Zroom"
    b->sound();
    
    // 3. Upcasting: Assigning the derived pointer to a base class pointer ('Scooty*')
    // Both pointers now point to the exact same SuperBike object.
    Scooty* s = b;
    
    // 4. Runtime Polymorphism again: Even through a 'Scooty*' pointer, the virtual 
    // mechanism ensures the child's implementation is executed. Outputs: "Zroom Zroom"
    s->sound();
    
    // 5. Memory Address: Printing pointers outputs the memory address they store.
    // This will print the same hex address twice because both point to the same object.
    cout << s << " " << b << endl;
}