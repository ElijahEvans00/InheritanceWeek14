// Elijah Evans
// CIS 1202 201
// April 19, 2024
#pragma once
#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"
// Defines Truck class as child of Vehicle
class Truck : public Vehicle {
private:
    int towingCapacity;
public:
    Truck(std::string manufacturer, int yearBuilt, int towingCapacity); // Constructor
    int getTowingCapacity() const;
    void setTowingCapacity(int towingCapacity);
    void displayInfo() const;
};

#endif