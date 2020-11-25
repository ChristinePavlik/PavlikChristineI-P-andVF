#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Truck.h"
#include "Car.h"
using namespace std;
int main(){
	//variables
	string man;
	int year;
	int door;
	int tow;
	Vehicle first;
	Car second;
	Truck third;

	//three sets of seting the data and  displaying it
	cout << "Vehicle:\nEnter the manufacturer: ";
	getline(cin, man);
	first.setManufacturer(man);
	cout << "Enter the year built: ";
	cin >> year;
	first.setYearBuilt(year);
	first.displayInfo();

	cout << "\n\nCar:\nEnter the manufacturer: ";
	getline(cin, man);
	getline(cin, man);
	second.setManufacturer(man);
	cout << "Enter the year built: ";
	cin >> year;
	second.setYearBuilt(year);
	cout << "Enter the number of doors: ";
	cin >> door;
	second.setDoors(door);
	second.displayInfo();

	cout << "\n\n\Truck:\nEnter the manufacturer: ";
	getline(cin, man);
	getline(cin, man);
	third.setManufacturer(man);
	cout << "Enter the year built: ";
	cin >> year;
	third.setYearBuilt(year);
	cout << "Enter the towing capacity: ";
	cin >> tow;
	third.setTowing(tow);
	third.displayInfo();

	return 0;
}