/*
Christine Pavlik
CIS 1202 501
November 29, 2020
*/
#ifndef TRUCK_H
#define TRUCK_H
#include <string>
#include "Vehicle.h"
using namespace std;
//class truck
class Truck : public Vehicle {
private:
	int towing;
public:
	Truck() : Vehicle() {
		towing = 0;
	}
	void setTowing(int);
	int getTowing() const;
	void displayInfo();
};
#endif


