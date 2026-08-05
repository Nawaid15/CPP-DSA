#include<iostream>
using namespace std;

class Vector {
public:
    int capacity;
    int size;
    int* arr;

    Vector() {
        size = 0;
        capacity = 1;
        arr = new int[1];
    }

    void push(int n) {//n=6
        if(size == capacity) {
            capacity *= 2;
            arr[size++] = n; 
            int* arr2 = new int[capacity];
            for(int i = 0; i < size; i++) {
                arr2[i] = arr[i];
            }
            delete[] arr;
            arr = arr2;
        }
        else {
            arr[size++] = n;//size = 0 arr[0] = 6 [size++ -> size = 1]
        }
        
    }

    void pop() {
        if(size == 0) cout << "Empty Vector" << endl;
        else {
            --size;
            for(int i = 0; i < size; i++) {
                this->arr[i] = arr[i];
            }
        }
    }

    void get(int idx) {
        if(size == 0) cout << "Empty Vector" << endl;
        else if(idx >= size || idx < 0) cout << "Invalid Index" << endl;
        else cout << arr[idx] << endl;
    }

    void print() {
        for(int i = 0; i < size; i++) cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Vector v1;
    cout << v1.size << endl;
    cout << v1.capacity << endl;
    v1.push(6);//runs
    cout << v1.size << endl;
    v1.push(7);
    cout << v1.size << endl;
    v1.push(8);
    cout << v1.size << endl;
    v1.push(9);
    cout << v1.size << endl;
    v1.push(10);
    v1.print();// 6 7 8 9 10
    v1.push(11);
    v1.print();// 6 7 8 9 10 11
    cout << v1.size << endl;
    cout << v1.capacity << endl;
    v1.pop();
    v1.print();// 6 7 8 9 10
    cout << v1.size << endl;
    cout << v1.capacity << endl;
    v1.get(1);
    v1.get(4);
    v1.get(11);
    Vector v2;
    v2.get(3);
    v2.pop();
}

// size - 0 capacity - 0
// size - 1 capacity - 1
// size - 2 capacity - 2
// size - 3 capacity - 4
// size - 4 capacity - 4
// size - 5 capacity - 8
// size - 6 capacity - 8
// size - 7 capacity - 8
// size - 8 capacity - 8

// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     vector<int> v(5);
//     v.push_back(6);
//     v.push_back(7);
//     v.push_back(8);
//     v.pop_back();// pop decreases the vector's size and not deletes the value itself it becoms ghost value
//     // which remains in the ram till another value overwrites it
//     cout << v[0] << v[1] << v[2] << v[3] << v[4] << v[5] << v[6] << v[7] << v[8] << v[9];
// }