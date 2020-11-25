/*
Christine Pavlik
CIS 1202 501
November 29, 2020
*/
#include "Truck.h"
#include <iostream>
#include <string>
using namespace std;
//truck member functions setter, getter, and display info
void Truck::setTowing(int toowing) {
	towing = toowing;
}
int Truck::getTowing() const {
	return towing;
}
void Truck::displayInfo() {
	Vehicle::displayInfo();
	cout << "\nTowing Capability: " << towing;
}