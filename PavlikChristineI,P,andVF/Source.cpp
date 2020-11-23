#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Truck.h"
#include "Car.h"
using namespace std;
int main(){
	string man;
	int year;
	int door;
	int tow;
	Vehicle first;
	Car second;
	Truck third;

	cout << "Vehicle\nEnter the manufacturer: ";
	getline(cin, man);
	first.setManufacturer(man);
	cout << "\nEnter the year built: ";
	cin >> year;
	first.setYearBuilt(year);
	first.displayInfo();

	cout << "Vehicle\nEnter the manufacturer: ";
	getline(cin, man);
	second.setManufacturer(man);
	cout << "\nEnter the year built: ";
	cin >> year;
	second.setYearBuilt(year);
	cout << "\nEnter the number of doors: ";
	cin >> door;
	second.setDoors(door);
	second.displayInfo();

	cout << "Vehicle\nEnter the manufacturer: ";
	getline(cin, man);
	third.setManufacturer(man);
	cout << "\nEnter the year built: ";
	cin >> year;
	third.setYearBuilt(year);
	cout << "\nEnter the towing capacity: ";
	cin >> tow;
	third.setTowing(tow);
	third.displayInfo();

	return 0;
}