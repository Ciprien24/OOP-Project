#pragma once
#include <iostream>
#include <string>
#include "Product.h"

using namespace std;

class Laptop : public Product
{
private:
	string name;
	string model;
	string CPU;
	string GPU;
	string display;
	int ram;
	int storage;
	double weight;

protected:
	Review review;

public:
	//constructors
	Laptop(string name, string model, string CPU, string GPU, string display, int ram, int storage, double weight, Review review);
	Laptop();

	//destructor
	virtual ~Laptop();

	//methods
	void setCPU(string CPU);
	string getCPU();

	void setGPU(string GPU);
	string getGPU();

	void setDisplay(string display);
	string getDisplay();

	void setRam(int ram);
	int getRam();

	void setStorage(int storage);
	int getStorage();

	void setWeight(double weight);
	double getWeight();

	void toString() override;

	//static polymorphism
	void getNameString();

	//dynamic polymorphism
	virtual void getTypeString();
};

