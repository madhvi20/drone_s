#ifndef DRONEOPERATION_H
#define DRONEOPERATION_H

#include <iostream>

class DroneOperation {
public:
    virtual void takeoff() {
        std::cout << "Drone taking off..." << std::endl;
    }

    virtual void survey() {
        std::cout << "Drone surveying..." << std::endl;
    }

    virtual void returnToHome() {
        std::cout << "Drone returning to home..." << std::endl;
    }

    virtual void land() {
        std::cout << "Drone landing..." << std::endl;
    }

    virtual void handleFailure() {
        std::cout << "Handling drone failure..." << std::endl;
    }
};

#endif // DRONEOPERATION_H
