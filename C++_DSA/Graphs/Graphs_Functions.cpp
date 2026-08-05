#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;

class Graphs {
    private:
    unordered_map<string,unordered_set<string>> adjList;

    public:
    bool addvertex(string str) {
        if(adjList.count(str) == 0) {
            adjList[str];
            return true;
        }
        return false;
    }

    bool addedge(string vertex1,string vertex2) {
        if(adjList.count(vertex1) != 0 && adjList.count(vertex2) != 0) {
            adjList.at(vertex1).insert(vertex2);
            adjList.at(vertex2).insert(vertex1);
            return true;
        }
        return false;
    }

    void printGraph() {
        if(adjList.empty()) {
            cout << "Graph is Empty" << endl;
            return; 
        }
        for(auto [string,set]:adjList) {
            cout << string << " [ ";
            for(auto set: set) {
                cout << set; 
            }
            cout << " ] " << endl;  
        }
    }
};

int main() {
    Graphs* G = new Graphs();
    G->addvertex("Nawaid");
    G->addvertex("Osaid");
    G->addedge("Nawaid","Osaid");
    G->printGraph();
}