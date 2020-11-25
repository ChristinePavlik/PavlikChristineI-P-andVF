/*
Christine Pavlik
CIS 1202 501
November 29, 2020
*/
#ifndef CAR_H
#define CAR_H
#include <string>
using namespace std;
#include "Vehicle.h"
class Car : public Vehicle
{
private:
	int doors;
public:	 
	Car();
	void setDoors(int);
	int getDoors() const;
	void displayInfo();
};
#endif