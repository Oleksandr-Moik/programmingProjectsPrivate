#include "DateTime.h"
<<<<<<< HEAD

#include <iostream>
#include <iomanip>
#include <string>
=======
#include <iostream>
>>>>>>> 386cfae9f3a642fb72f665a933f3c73f0ffc7cc0
using namespace std;

DateTime::DateTime() :day(1), month(1), year(2009) {}
DateTime::DateTime(unsigned short int day, unsigned short int month, unsigned int year) : day(day), month(month), year(year) {}
DateTime::~DateTime() {}

void DateTime::setAll(unsigned short int day, unsigned short int month, unsigned int year) {
	this->day = day; this->month = month; this->year = year;
}

int DateTime::getYear() { return year; }
int DateTime::getMounth() { return month; }
int DateTime::getDay() { return day; }

DateTime DateTime::nextDay(DateTime obj) {
	this->day = obj.day;
	this->month = obj.month;
	this->year = obj.year;
	this->day++;

	if (((month <= 7) && (month % 2 == 1)) || ((month >= 8) && (month % 2 == 0))) {
		if (day > 31) { day = 1; month++; }
	}
	else {
		if ((month == 4) || (month == 6) || (month == 9) || (month == 11)) {
			if (day > 30) { day = 1; month++; }
		}
		else { //mounth == 2
			if (((year % 4 == 0) && (year % 100 != 0))
				|| ((year % 4 == 0) && (year % 100 != 0) && (year % 400 == 0))) {
				if (day > 29) { day = 1; month++; }
			}
			else { if (day > 28) { day = 1; month++; } }
		}
	}
	if (month > 12) { month = 1;	year++; }

	return DateTime(day, month, year);
}
DateTime DateTime::previousDay(DateTime obj) {
	this->day = obj.day;
	this->month = obj.month;
	this->year = obj.year;
	this->day--;

	if (((month <= 7) && (month % 2 == 1)) || ((month >= 8) && (month % 2 == 0))) {
		if (day < 1) {
			if (month == 1 || month == 8) { day = 31; month--; }
			else {
				day = 30; month--;
				if (month == 2) {
					if (((year % 4 == 0) && (year % 100 != 0))
						|| ((year % 4 == 0) && (year % 100 != 0) && (year % 400 == 0))) day = 29;
					else day = 28;
				}
			}
		}
	}
	else if ((month == 2) || (month == 4) || (month == 6) || (month == 9) || (month == 11)) {
		if (day < 1) { day = 31; month--; }
	}
	if (month == 0) {
		day = 31;
		month = 12;
		year--;
	}
	return DateTime(day, month, year);
}
int DateTime::countEndDays() {
	if (month == 2) {
		if (((year % 4 == 0) && (year % 100 != 0)) || ((year % 4 == 0) && (year % 100 != 0) && (year % 400 == 0)))
			return 29 - day;
		else return 28 - day;
	}
	else if (((month <= 7) && (month % 2 == 1)) || ((month >= 8) && (month % 2 == 0))) {
		return 31 - day;
	}
	else { return 30 - day; }
}

DateTime DateTime::inputDate() {
	cout << "year: "; cin >> year;
	bool b = true;
	do {
		cout << "month: "; cin >> month;
		if (month >= 1 && month <= 12)b = false;
		else cout << "Incorect month\n";
	} while (b);

	b = true;
	do {
		cout << "day: "; cin >> day;
		if (month == 2) {
			if (((year % 4 == 0) && (year % 100 != 0))
				|| ((year % 4 == 0) && (year % 100 != 0) && (year % 400 == 0))) {
				if (day <= 29)b = false;
			}
			else if (day <= 28) b = false;
		}
		else if (((month <= 7) && (month % 2 == 1)) || ((month >= 8) && (month % 2 == 0))) {
			if (day <= 31)b = false;
		}
		else { if (day <= 30)b = false; }
		if (b)cout << "there is no such day\n";
	} while (b);

	return DateTime(day, month, year);
}
void DateTime::showDate() {
	printf("%02d.%02d.%04d\n", day, month, year);
}

bool DateTime::operator&(DateTime obj) {
<<<<<<< HEAD
	return ((this->day == obj.day) && (this->month == obj.month) && (this->year == obj.year))
=======
	return ((day == obj.day) && (month == obj.month) && (year == obj.year))
>>>>>>> 386cfae9f3a642fb72f665a933f3c73f0ffc7cc0
		? true : false;
}
bool DateTime::operator!() {
	if (day < 28) return true;
	else {
		if (month == 2) {
			if (((year % 4 == 0) && (year % 100 != 0)) || ((year % 4 == 0) && (year % 100 != 0) && (year % 400 == 0)))
				return (day == 29) ? false : true;
			else return (day == 28) ? false : true;
		}
		else if (((month <= 7) && (month % 2 == 1)) || ((month >= 8) && (month % 2 == 0))) {
			return (day == 31) ? false : true;
		}
		else if ((month == 4) || (month == 6) || (month == 9) || (month == 11))
		{
			return (day == 30) ? false : true;
		}
	}
}
<<<<<<< HEAD
DateTime::operator bool() {
	return (day == 1 && month == 1) ? true : false;
}
string DateTime::toString() {
	return to_string(day) + "." + to_string(month) + "." + to_string(year);
}
=======
bool DateTime::logic() {
	return (day == 1 && month == 1) ? true : false;
}
>>>>>>> 386cfae9f3a642fb72f665a933f3c73f0ffc7cc0
