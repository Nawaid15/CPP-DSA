#include<iostream>
#include<vector>
using namespace std;

class Heap {
    private:
    vector<int> heap; 

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
        int temp = heap[index1];
        heap[index1] = heap[index2];
        heap[index2] = temp;
    }

    public:
    void insert(int value) {
        heap.push_back(value);
        int current = heap.size() - 1;
        while(heap[parent(current)] < heap[current]) {
            swap(parent(current),current);
            current = parent(current);
        }
    }

    void printHeap() {
        for(int i = 0; i < heap.size(); i++) {
            cout << heap[i] << " ";
        }
    }
};

int main() {
    Heap* H = new Heap();
    H->insert(99);
    H->insert(72);
    H->insert(61);
    H->insert(58);
    H->insert(100);
    H->printHeap();
}