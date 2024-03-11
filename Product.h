#pragma once
#include <string>
#include <iostream>
#include "Review.h"
#include "Object.h"

using namespace std;

class Product : public Object
{
private:
	string name;
	string model;
	double id;
	bool inStock;

protected:
	string imageURL;
	double price; //$
	Review review;//Product class has Review class

public:
	string description;
	string materials;

	//constructors
	Product(string name, string model, double id, bool inStock, string imageURL, double price, string description, string materials, Review review);
	Product();

	//destructor
	virtual ~Product();

	//methods
	void setName(string name);
	string getName();

	void setModel(string model);
	string getModel();

	void setId(double id);
	double getId();

	void setInStock(bool inStock);
	bool getInStock();

	void setImageURL(string imageURL);
	string getImageURL();

	void setPrice(double price);
	double getPrice();

	void setDescription(string description);
	string getDescription();

	void setMaterials(string materials);
	string getMaterials();

	void setReview(Review review);
	Review getReview();

	//override
	void toString() override;

	//static polymorphism
	void getNameString();

	//dynamic polymorphism
	virtual void getTypeString();
};

