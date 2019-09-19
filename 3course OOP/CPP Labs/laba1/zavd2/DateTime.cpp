#include "DateTime.h"
#include <iostream>
using namespace std;

DateTime::DateTime() :day(1), month(1), year(2009) {};
DateTime::DateTime(short int day = 1, short int month = 1, int year = 2009) {
	this->day = day;
	this->month = month;
	this->year = year;
};
DateTime::DateTime(const DateTime& date) :day(date.day), month(date.month), year(date.year) {};


int DateTime::getDay() {
	return this->day;
};
int DateTime::getMonth() {
	return this->month;
};
int DateTime::getYear() {
	return this->year;
};


void DateTime::setDay(short int day) {
	this->day = day;
};
void DateTime::setMonth(short int month) {
	this->month = month;
};
void DateTime::setYear(int year) {
	this->year = year;
};
DateTime DateTime::inputData() {
	cout << "Enter params:\n";
	cout << "day: ";    	cin >> this->day;
	cout << "\nmonth: ";    cin >> this->month;
	cout << "\nyear: "; 	cin >> this->year;
	return DateTime(day, month, year);
}


void DateTime::printTime() {
	printf("%d/%d/%d\n", day, month, year);
};

