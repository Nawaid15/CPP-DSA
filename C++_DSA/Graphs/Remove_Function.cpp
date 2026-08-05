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
        cout << "vertex " << str << " is already" << endl;
        return false;
    }

    bool addedge(string vertex1,string vertex2) {
        if(adjList.count(vertex1) != 0 && adjList.count(vertex2) != 0) {
            adjList.at(vertex1).insert(vertex2);
            adjList.at(vertex2).insert(vertex1);
            return true;
        }
        cout << "Not Found" << endl;
        return false;
    }

    bool RemoveVertex(string vertex) {
        if(adjList.count(vertex) == 0) {
            cout << "Not Found vertex " << vertex << endl;
            return false;
        }
        for(auto othervertex : adjList.at(vertex)) {
            adjList.at(othervertex).erase(vertex);
        }
        adjList.erase(vertex);
        return true;
    }

    bool RemoveEdge(string vertex1,string vertex2) {
        if(adjList.count(vertex1) == 0 && adjList.count(vertex2) == 0) {
            cout << "Not Found both of the Vertices" << endl;
            return false;
        }
        else if(adjList.count(vertex1) == 0) {
            cout << "Not Found Vertex " << vertex1 << endl;
            return false;
        }
        else if(adjList.count(vertex2) == 0) {
            cout << "Not Found Vertex " << vertex2 << endl;
            return false;
        }
        adjList.at(vertex1).erase(vertex2);
        adjList.at(vertex2).erase(vertex1);
        return true;
    }

    void printGraph() {
        if(adjList.empty()) {
            cout << "Graph is Empty" << endl;
            return;
        }
        for(auto [vertex,edge] : adjList) {
            cout << vertex << " [ " ;
            for(auto e : edge) {
                cout << e << " ";
            }
            cout << " ] " << endl;
        }
    }
};

int main() {
    Graphs* G = new Graphs();
    G->addvertex("Nawaid");
    G->addvertex("Osaid");
    G->addvertex("Junaid");
    G->addedge("Nawaid","Osaid");
    G->addedge("Nawaid","Junaid");
    G->printGraph();
    G->RemoveEdge("Nawaid","Junaid");
    G->RemoveVertex("Junaid");
    G->printGraph();
    cout << "-----------------------------------" << endl;
    G->printGraph();
}