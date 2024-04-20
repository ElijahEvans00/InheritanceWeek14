// Elijah Evans
// CIS 1202 201
// April 19, 2024
#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
//Defining Vehicle class
class Vehicle {
private:
	std::string manufacturer;
	int yearBuilt;

public:
	Vehicle(std::string manufactuerer, int yearBuilt); // Constructor
	std::string getManufacturer() const;
	void setManufacturer(std::string manufacturer); 
	int getYearBuilt() const;
	void setYearBuilt(int yearBuilt);
	void displayInfo() const;
};

#endif