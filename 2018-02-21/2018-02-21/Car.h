#pragma once
#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
	Car();
	Car(string make);
	Car(string make, string model);
	Car(string make, string model, int year);
	Car(string make, string model, int year, string plate);
	Car(string make, string model, int year, string plate, string color);
	string plate = "AAA 123";
	string color = "Black";
	string getMake() const;
	string getModel() const;
	int getYear() const;
private:
	string make = "Toyota";
	string model = "Charger";
	int year = 2018;
};

