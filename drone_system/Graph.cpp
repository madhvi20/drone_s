#include "Graph.h"

Graph::Graph(int nodes) : numNodes(nodes) {}

void Graph::addEdge(int u, int v, double weight) {
    adjList[u].emplace_back(v, weight);
    adjList[v].emplace_back(u, weight);
}

std::vector<int> Graph::dijkstra(int start, int end) {
    std::vector<double> dist(numNodes, std::numeric_limits<double>::infinity());
    std::vector<int> parent(numNodes, -1);
    std::set<std::pair<double, int>> pq;

    dist[start] = 0.0;
    pq.insert({0.0, start});

    while (!pq.empty()) {
        int u = pq.begin()->second;
        pq.erase(pq.begin());

        if (u == end) break;

        for (auto &[v, weight] : adjList[u]) {
            double alt = dist[u] + weight;
            if (alt < dist[v]) {
                pq.erase({dist[v], v});
                dist[v] = alt;
                parent[v] = u;
                pq.insert({dist[v], v});
            }
        }
    }

    std::vector<int> path;
    for (int at = end; at != -1; at = parent[at]) {
        path.push_back(at);
    }
    std::reverse(path.begin(), path.end());

    return path;
}
