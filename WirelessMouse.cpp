#include "WirelessMouse.h"

WirelessMouse::WirelessMouse(string name, string model, int resolution, string interface, string sensorType, double batteryLife, int latency, Review review) : name{ name }, model{ model }, resolution{ resolution }, interface { interface }, sensorType{ sensorType }, batteryLife{ batteryLife }, latency{ latency }, review{ review } {
	//cout << "WirelessMouse class: constructor with all the parameters" << endl;
};

WirelessMouse::WirelessMouse() : WirelessMouse("No name", "No model", 0, "No interface", "No sensor", 0, 0, Review()) {
	//cout << "WirelessMouse class: constructor with no parameters" << endl;
}

WirelessMouse::~WirelessMouse() {
	//cout << "WirelessMouse class: destructor" << endl;
}

void WirelessMouse::setBatteryLife(double batteryLife) {
	this->batteryLife = batteryLife;
}

double WirelessMouse::getBatteryLife() {
	return batteryLife;
}

void WirelessMouse::setLatency(int latency) {
	this->latency = latency;
}

int WirelessMouse::getLatency() {
	return latency;
}

void WirelessMouse::toString() {
	cout << endl;
	cout << "WIRELESS MOUSE" << endl;
	cout << "Name: " << name << endl;
	cout << "Model: " << model << endl;
	cout << "Resolution: " << resolution << "DPI" << endl;
	cout << "Interface: " << interface << endl;
	cout << "Sensor type: " << sensorType << endl;
	cout << "Battery life: " << batteryLife << "h" << endl;
	cout << "Latency: " << latency << "ms" << endl;
	review.toString();
}

void WirelessMouse::getNameString() {
	cout << "WirelessMouse class: test string for static polymorphism" << endl;
}

void WirelessMouse::getTypeString() {
	cout << "WirelessMouse class: test string for dynamic polymorphism" << endl;
}