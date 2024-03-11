#pragma once
#include <iostream>
#include <string>

using namespace std;

class Review
{
private:
	string title;
	string text;
	string date;
	double rating;

public:
	//constructors
	Review(string title, string text, string date, double rating);
	Review();

	//destructor
	~Review();

	//methods
	void setTitle(string title);
	string getTitle();

	void setText(string text);
	string getText();

	void setDate(string date);
	string getDate();

	void setRating(double rating);
	double getRating();

	void toString(); //override
};

