#include "Car.h"
#include <iostream>
#include <string>

using namespace std;
Car::Car() {

}

Car::Car(string make) {
	this->make = make;
}

Car::Car(string make, string model) {
	this->make = make;
	this->model = model;
}

Car::Car(string make, string model, int year) {
	this->make = make;
	this->model = model;
	this->year = year;
}

Car::Car(string make, string model, int year, string plate) {
	this->make = make;
	this->model = model;
	this->year = year;
	this->plate = plate;
}

Car::Car(string make, string model, int year, string plate, string color) {
	this->make = make;
	this->model = model;
	this->year = year;
	this->plate = plate;
	this->color = color;
}

string Car::getMake() const { return this->make; }
string Car::getModel() const { return this->model; }
int Car::getYear() const { return this->year; }