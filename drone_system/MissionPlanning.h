#ifndef MISSIONPLANNING_H
#define MISSIONPLANNING_H

#include "Graph.h"
#include <vector>

class MissionPlanning {
public:
    MissionPlanning(int nodes);
    void addEdge(int u, int v, double weight);
    std::vector<int> planMission(int start, int end);

private:
    Graph graph;
};

#endif // MISSIONPLANNING_H
