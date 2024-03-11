#include "Laptop.h"

Laptop::Laptop(string name, string model, string CPU, string GPU, string display, int ram, int storage, double weight, Review review) : name{ name }, model{ model }, CPU{ CPU }, GPU{ GPU }, display{ display }, ram{ ram }, storage{ storage }, weight{ weight }, review{ review } {
	//cout << "Laptop class: constructor with all the parameters" << endl;
}

Laptop::Laptop() : Laptop("No name", "No model", "No CPU", "No GPU", "No display", 0, 0, 0, Review()) {
	//cout << "Laptop class: constructor with no parameters" << endl;
}

Laptop::~Laptop() {
	//cout << "Laptop class: destructor" << endl;
}

void Laptop::setCPU(string CPU) {
	this->CPU = CPU;
}

string Laptop::getCPU() {
	return CPU;
}

void Laptop::setGPU(string GPU) {
	this->GPU = GPU;
}

string Laptop::getGPU() {
	return GPU;
}

void Laptop::setDisplay(string display) {
	this->display = display;
}

string Laptop::getDisplay() {
	return display;
}

void Laptop::setRam(int ram) {
	this->ram = ram;
}

int Laptop::getRam() {
	return ram;
}

void Laptop::setStorage(int storage) {
	this->storage = storage;
}

int Laptop::getStorage() {
	return storage;
}

void Laptop::setWeight(double weight) {
	this->weight = weight;
}

double Laptop::getWeight() {
	return weight;
}

void Laptop::toString() {
	cout << endl;
	cout << "LAPTOP" << endl;
	cout << "Name: " << name << endl;
	cout << "Model: " << model << endl;
	cout << "CPU: " << CPU << endl;
	cout << "GPU: " << GPU << endl;
	cout << "Display: " << display << endl;
	cout << "Ram: " << ram << "GB" << endl;
	cout << "Storage: " << storage << "GB" << endl;
	cout << "Weight: " << weight << "kg" << endl << endl;
	review.toString();
}

void Laptop::getNameString() {
	cout << "Laptop class: test string for static polymorphism" << endl;
}

void Laptop::getTypeString() {
	cout << "Laptop class: test string for dynamic polymorphism" << endl;
}