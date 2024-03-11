#pragma once
#include <iostream>
#include <string>
#include "Mouse.h"

using namespace std;

class WirelessMouse : public Mouse
{
private:
	string name;
	string model;
	int resolution;
	string interface;
	string sensorType;
	double batteryLife;
	int latency;

protected:
	Review review;

public:
	//constructors
	WirelessMouse(string name, string model, int resolution, string interface, string sensorType, double batteryLife, int latency, Review review);
	WirelessMouse();

	//destructor
	virtual ~WirelessMouse();

	//methods
	void setBatteryLife(double batteryLife);
	double getBatteryLife();

	void setLatency(int latency);
	int getLatency();

	void toString() override;

	//static polymorphism
	void getNameString();

	//dynamic polymorphism
	virtual void getTypeString();
};

