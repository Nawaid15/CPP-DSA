#include<iostream>
using namespace std;

class Cricketer {
public:
    int runs;
    float avg; 
};

class Engineer {
public:
    int expirience;
    string domain;

protected:
    int salary;
};

class Phodu : public Cricketer, public Engineer{
public:
    string name, hobbies;
    void change() {
        salary = 20000;
        cout << salary << endl;
    }
};

int main() {
    Phodu p1;
    p1.expirience = 11;
    p1.change();
}