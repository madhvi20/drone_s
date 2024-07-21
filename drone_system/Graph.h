#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <unordered_map>
#include <limits>
#include <set>
#include <utility>
#include <iostream>

class Graph {
public:
    Graph(int nodes);
    void addEdge(int u, int v, double weight);
    std::vector<int> dijkstra(int start, int end);

private:
    int numNodes;
    std::unordered_map<int, std::vector<std::pair<int, double>>> adjList;
};

#endif // GRAPH_H
