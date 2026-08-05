#include<iostream>
using namespace std;

class Fraction {
public:
    int num,den;

    Fraction() {}

    Fraction(int n, int d) {
        num = n;
        den = d;
    }

    void add(Fraction& f) {
        this->num = (f.num*den + num*f.den);
        this->den = f.den*den;
        cout << this->num << " / " << this->den << endl;   
    }

    void display() {
        cout << num << " / " << den << endl;
    }
};

int main() {
    Fraction f1(1,2);
    Fraction f2(1,4);
    f1.display();
    f2.display();
    f1.add(f2);
}