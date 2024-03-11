#include "Mouse.h"

Mouse::Mouse(string name, string model, double resolution, string interface, string sensorType, Review review) : name{ name }, model{ model }, resolution{ resolution }, interface { interface }, sensorType{ sensorType }, review{ review } {
	//cout << "Mouse class: constructor with all the parameters" << endl;
}

Mouse::Mouse() : Mouse("No name", "No model", 0, "No interface", "No sensor", Review()) {
	//cout << "Mouse class: constructor with no parameters" << endl;
}

Mouse::~Mouse() {
	//cout << "Mouse class: destructor" << endl;
}

void Mouse::setResolution(double resolution) {
	this->resolution = resolution;
}

double Mouse::getResolution() {
	return resolution;
}

void Mouse::setInterface(string interface) {
	this->interface = interface;
}

string Mouse::getInterface() {
	return interface;
}

void Mouse::setSensorType(string sensorType) {
	this->sensorType = sensorType;
}

string Mouse::getSensorType() {
	return sensorType;
}

void Mouse::toString() {
	cout << endl;
	cout << "MOUSE" << endl;
	cout << "Name: " << name << endl;
	cout << "Model: " << model << endl;
	cout << "Sensor resolution: " << resolution << "DPI" << endl;
	cout << "Interface: " << interface << endl;
	cout << "Sensor type: " << sensorType << endl << endl;
	review.toString();
}

void Mouse::getNameString() {
	cout << "Mouse class: test string for static polymorphism" << endl;
}

void Mouse::getTypeString() {
	cout << "Mouse class: test string for dynamic polymorphism" << endl;
}