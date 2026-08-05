#include<iostream>
using namespace std;
 
class Cricketer {
public:
    string name;
    int runs;
    float avg;

    Cricketer(string name, int runs, float avg) {
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }

    void print(int runs) {
        cout << this->name << " " << this->runs << " " << this->avg << endl;
        cout << runs << endl; 
    }

    int matches() {
        return runs/avg;
    }
};

int main() {
    Cricketer s1("Virat Kohli", 25000, 58.2);
    Cricketer s2("Rohit Sharma", 18000, 50.2);
    s1.print(40);
    cout << s1.runs << endl;
    s2.print(50);
    cout << "------------------- No. of Matches-----------------------" << endl;
    cout << "Virat Kohli " << " ";
    cout << s1.matches() << endl; 
    cout << "Rohit Sharma ";
    cout << s2.matches() << endl;
}