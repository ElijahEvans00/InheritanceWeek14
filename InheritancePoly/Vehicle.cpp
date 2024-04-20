// Elijah Evans
// CIS 1202 201
// April 19, 2024
#include "Vehicle.h"
#include <iostream>

using namespace std;

Vehicle::Vehicle(string manufacturer, int yearBuilt)
    : manufacturer(manufacturer), yearBuilt(yearBuilt) {} // Constructor

string Vehicle::getManufacturer() const {
    return manufacturer; // Returns manufacturer
}

void Vehicle::setManufacturer(string manufacturer) {
    this->manufacturer = manufacturer; // Sets manufacturer
}

int Vehicle::getYearBuilt() const {
    return yearBuilt; // Returns yearBuilt
}

void Vehicle::setYearBuilt(int yearBuilt) {
    this->yearBuilt = yearBuilt; // Sets yearBuilt
}

void Vehicle::displayInfo() const {
    cout << "Manufacturer: " << manufacturer << ", Year Built: " << yearBuilt << endl; // Displays Vehicle info
}
