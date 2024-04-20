// Elijah Evans
// CIS 1202 201
// April 19, 2024
#pragma once
#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
// Defines Car class as child of Vehicle
class Car : public Vehicle {
private:
    int numDoors;
public:
    Car(std::string manufacturer, int yearBuilt, int numDoors); // Constructor
    int getNumDoors() const;
    void setNumDoors(int numDoors);
    void displayInfo() const;
};

#endif