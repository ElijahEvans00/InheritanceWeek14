// Elijah Evans
// CIS 1202 201
// April 19, 2024
#include "Car.h"
#include <iostream>

using namespace std;

Car::Car(string manufacturer, int yearBuilt, int numDoors)
    : Vehicle(manufacturer, yearBuilt), numDoors(numDoors) {} // Constructor

int Car::getNumDoors() const {
    return numDoors; // Returns numDoors
}

void Car::setNumDoors(int numDoors) {
    this->numDoors = numDoors; // Sets numDoors
}

void Car::displayInfo() const {
    Vehicle::displayInfo(); // Calls displayInfo from Vehicle.cpp
    cout << "Number of doors: " << numDoors << endl; // Displays numDoors
}
