/*
Christine Pavlik
CIS 1202 501
November 29, 2020
*/
#include "Truck.h"
#include <iostream>
#include <string>
using namespace std;
Truck::Truck() : Vehicle() {
	towing = 0;
}
void Truck::setTowing(int toowing) {
	towing = toowing;
}
int Truck::getTowing() const {
	return towing;
}
void Truck::displayInfo() override {
	cout << Vehicle::displayInfo() << "\nTowing Capability: " << towing;
}