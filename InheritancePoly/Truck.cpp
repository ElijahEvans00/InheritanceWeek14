// Elijah Evans
// CIS 1202 201
// April 19, 2024
#include "Truck.h"
#include <iostream>

using namespace std;

Truck::Truck(string manufacturer, int yearBuilt, int towingCapacity)
    : Vehicle(manufacturer, yearBuilt), towingCapacity(towingCapacity) {}// Constructor

int Truck::getTowingCapacity() const {
    return towingCapacity; // Returns towingCapacity
}

void Truck::setTowingCapacity(int towingCapacity) {
    this->towingCapacity = towingCapacity; // Sets towingCapacity
}

void Truck::displayInfo() const {
    Vehicle::displayInfo(); // Calls displayInfo from Vehicle.cpp
    cout << "Towing Capacity: " << towingCapacity << endl; // Displays towingCapacity
}
