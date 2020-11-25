/*
Christine Pavlik
CIS 1202 501
November 29, 2020
*/
#include "Vehicle.h"
#include <iostream>
#include <string>
using namespace std;

//Vehicle member functions setters, getters, and display info
void Vehicle::setManufacturer(string man){
	manufacturer = man;
}
string Vehicle::getManufacturer() const{
	return manufacturer;
}
void Vehicle::setYearBuilt(int year) {
	yearBuilt = year;
}
int Vehicle::getYearBuilt() const{
	return yearBuilt;
}
void Vehicle::displayInfo() {
	cout << "Vehicle Information:" << "\nManufacturer: " << manufacturer << "\nYear Built: " << yearBuilt;
}
