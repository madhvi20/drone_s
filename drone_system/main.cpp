#include <iostream>
#include "DroneOperation.h"
#include "MissionPlanning.h"
#include "Survey.h"
#include <vector>
#include <thread>

void droneOperations(DroneOperation* drone, const std::vector<int>& path) {
    drone->takeoff();
    drone->survey();
    Survey survey;
    survey.conductSurvey(path);
    drone->returnToHome();
    drone->land();
}

int main() {
    DroneOperation drone;
    MissionPlanning mission(100);

    // Adding edges to the graph (for simplicity, random weights and connections)
    for (int i = 0; i < 100; ++i) {
        for (int j = i + 1; j < 100; ++j) {
            mission.addEdge(i, j, rand() % 100 + 1);
        }
    }

    int startNode = 0;
    int endNode = 99;
    std::vector<int> path = mission.planMission(startNode, endNode);

    std::thread droneThread(droneOperations, &drone, path);
    droneThread.join();

    return 0;
}
