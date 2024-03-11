#include "Product.h"

Product::Product(string name, string model, double id, bool inStock, string imageURL, double price, string description, string materials, Review review) : name{ name }, model{ model }, id{ id }, inStock{ inStock }, imageURL{ imageURL }, price{ price }, description{ description }, materials{ materials }, review{ review } {
	//cout << "Product class: Constructor with all the parameters" << endl;
}

Product::Product() : Product("No name", "No model", 0, false, "No image", 0, "No description", "No materials", Review()) {
	//cout << "Product class: Constructor with no parameters" << endl;
}

Product::~Product() {
	//cout << "Product class: destructor" << endl;
}

void Product::setName(string name) {
	this->name = name;
}

string Product::getName() {
	return name;
}

void Product::setModel(string model) {
	this->model = model;
}

string Product::getModel() {
	return model;
}

void Product::setId(double id) {
	this->id = id;
}

double Product::getId() {
	return id;
}

void Product::setInStock(bool inStock) {
	this->inStock = inStock;
}

bool Product::getInStock() {
	return inStock;
}

void Product::setImageURL(string imageURl) {
	this->imageURL = imageURL;
}

string Product::getImageURL() {
	return imageURL;
}

void Product::setPrice(double price) {
	this->price = price;
}

double Product::getPrice() {
	return price;
}

void Product::setDescription(string description) {
	this->description = description;
}

string Product::getDescription() {
	return description;
}

void Product::setMaterials(string materials) {
	this->materials = materials;
}

string Product::getMaterials() {
	return materials;
}

void Product::setReview(Review review) {
	this->review = review;
}

Review Product::getReview() {
	return review;
}

void Product::toString() {
	cout << endl;
	cout << "PRODUCT" << endl;
	cout << "Name: " << name << endl;
	cout << "Model: " << model << endl;
	cout << "Product ID: " << id << endl;
	cout << "Price: $" << price << endl;
	cout << "In stock: " << inStock << endl;
	cout << "Image URL: " << imageURL << endl;
	cout << "Description: " << description << endl;
	cout << "Materials used: " << materials << endl << endl;
	review.toString();
}

void Product::getNameString() {
	cout << "Product class: test string for static polymorphism" << endl;
}

void Product::getTypeString() {
	cout << "Product class: test string for dynamic polymorphism" << endl;
}