/*
Christine Pavlik
CIS 1202 501
November 29, 2020
*/
#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
using namespace std;
class Vehicle {
private:
	string manufacturer;
	int yearBuilt;
public:
	void setManufacturer(string);
	void setYearBuilt(int);
	string getManufacturer() const;
	int getYearBuilt() const;
	void displayInfo() const;
};
#endif

