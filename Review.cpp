#include "Review.h"

Review::Review(string title, string text, string date, double rating) : title{ title }, text{ text }, date{ date }, rating{ rating } {
	//cout << "Review class: constructor with all the parameters" << endl;
}

Review::Review() : Review("No title", "No text", "No date", 0) {
	//cout << "Review class: constructor with no parameters" << endl;
}

Review::~Review() {
	//cout << "Review class: destructor" << endl;
}

void Review::setTitle(string title) {
	this->title = title;
}

string Review::getTitle() {
	return title;
}

void Review::setText(string text) {
	this->text = text;
}

string Review::getText() {
	return text;
}

void Review::setDate(string date) {
	this->date = date;
}

string Review::getDate() {
	return date;
}

void Review::setRating(double rating) {
	this->rating = rating;
}

double Review::getRating() {
	return rating;
}

void Review::toString(){
	cout << endl;
	cout << "REVIEW" << endl;
	cout << "Title: " << title << endl;
	cout << "Date: " << date << endl;
	cout << "Text: " << text << endl;
	cout << "Rating: " << rating << "/5 *" << endl << endl;
}