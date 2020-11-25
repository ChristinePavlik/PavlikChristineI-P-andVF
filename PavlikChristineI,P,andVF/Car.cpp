/*
Christine Pavlik
CIS 1202 501
November 29, 2020
*/
#include "Car.h"
#include <iostream>
#include <string>
using namespace std;

//car member functions setter, getter, and display info
void Car::setDoors(int dooors) {
	doors = dooors;
}
int Car::getDoors() const{
	return doors;
}
void Car::displayInfo() {
	Vehicle::displayInfo();
	cout << "\nDoors: " << doors;
}