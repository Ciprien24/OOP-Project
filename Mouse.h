#pragma once
#include <iostream>
#include <string>
#include "Product.h"

using namespace std;

class Mouse : public Product
{
private:
	string name;
	string model;
	double resolution;
	string interface;
	string sensorType;

protected:
	Review review;

public:
	//constructors
	Mouse(string name, string model, double resolution, string interface, string sensorType, Review review);
	Mouse();

	//destructor
	virtual ~Mouse();

	//methods
	void setResolution(double resolution);
	double getResolution();

	void setInterface(string interface);
	string getInterface();

	void setSensorType(string sensorType);
	string getSensorType();

	void toString() override;

	//static polymorphism
	void getNameString();

	//dynamic polymorphism
	virtual void getTypeString();
};

