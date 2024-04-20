// Elijah Evans
// CIS 1202 201
// April 19, 2024

#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main() {
    cout << "Vehicle Program\n";
    // Vehicle
    string manufacturer;
    int yearBuilt;
    cout << "\nVehicle:\n";
    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer); // Get input for manufacturer
    cout << "Enter the year built: ";
    cin >> yearBuilt; // Get input for yearBuilt
    cin.ignore();
    Vehicle vehicle(manufacturer, yearBuilt); // Create instance of Vehicle
    vehicle.displayInfo(); // Display the Vehicles info

    // Car
    int numDoors;
    cout << "\nCar:\n";
    cout << "\nEnter the manufacturer: ";
    getline(cin, manufacturer); // Get input for manufacturer
    cout << "Enter the year built: ";
    cin >> yearBuilt; // Get input for yearBuilt
    cin.ignore();
    cout << "Enter the number of doors: ";
    cin >> numDoors; // Get input for numDoors
    cin.ignore();
    Car car(manufacturer, yearBuilt, numDoors); // Create instance of Car
    car.displayInfo();  // Display the Cars info

    // Truck
    int towingCapacity;
    cout << "\nTruck:\n";
    cout << "\nEnter the manufacturer: ";
    getline(cin, manufacturer); // Get input for manufacturer
    cout << "Enter the year built: ";
    cin >> yearBuilt; // Get input for yearBuilt
    cin.ignore();
    cout << "Enter the towing capacity: ";
    cin >> towingCapacity; // Get input for towingCapacity
    cin.ignore();
    Truck truck(manufacturer, yearBuilt, towingCapacity); // Create instance of Truck
    truck.displayInfo(); // Display the Trucks info

    return 0;
}


