#include<iostream>
#include<vector>
using namespace std;

class Heaps {
    private:
    vector<int> Heap;

    int leftChild(int index) {
        return 2*index + 1;
    }

    int rightChild(int index) {
        return 2*index + 2;
    }

    int parent(int index) {
        return (index - 1)/2;
    }

    void swap(int index1,int index2) {
        int temp = Heap[index1];
        Heap[index1] = Heap[index2];
        Heap[index2] = temp;
    }

    int maxNum(int current) {
        if(rightChild(current) >= Heap.size() && leftChild(current) < Heap.size()) {
            return leftChild(current);
        }
        else if(leftChild(current) >= Heap.size() && rightChild(current) >= Heap.size()) {
            return current;
        }
        else if(Heap[rightChild(current)] > Heap[leftChild(current)]) {
            return rightChild(current);
        }
        return leftChild(current);
    } 
    
    void sinkDown(int index) {
        int current = index;
        int maxIndex;
        if(Heap[current] < Heap[maxNum(current)]) {
            maxIndex = maxNum(current); 
            while(Heap[current] < Heap[maxNum(current)]) {
                swap(maxIndex,current);
                current = maxIndex;
                maxIndex = maxNum(current);
            }
        }  
        else return;
    }

    public:
    void insert(int value) {
        Heap.push_back(value);
        int current = Heap.size() - 1;
        while(current > 0 && Heap[parent(current)] < Heap[current]) {
            swap(current,parent(current));
            current = parent(current);
        }
    }

    int remove() {
        if(Heap.empty()) {
            return INT_MIN;
        }
        int max_int = Heap.front();
        if(Heap.size() == 1) {
            Heap.pop_back();
            return max_int;
        }
        Heap[0] = Heap.back();
        Heap.pop_back();
        sinkDown(0);
        return max_int;
    }

    void printHeap() {
        for(int i = 0; i < Heap.size(); i++) {
            cout << Heap[i] << " ";
        }
    }

};

int main() {
    Heaps* H = new Heaps();
    H->insert(55);
    H->insert(80);
    H->insert(75);
    H->insert(50);
    H->insert(60);
    H->insert(65);
    H->printHeap(); 
    cout << endl;
    H->remove();
    cout << "-----------------------------------" << endl;
    H->printHeap();
}