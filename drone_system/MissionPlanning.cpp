#include "MissionPlanning.h"

MissionPlanning::MissionPlanning(int nodes) : graph(nodes) {}

void MissionPlanning::addEdge(int u, int v, double weight) {
    graph.addEdge(u, v, weight);
}

std::vector<int> MissionPlanning::planMission(int start, int end) {
    return graph.dijkstra(start, end);
}
