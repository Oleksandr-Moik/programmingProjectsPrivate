#pragma once
class Date
{
private:
	int day;
	int month;
	int year;

public:
	Date();
	Date(short int,short int, int);
	Date(const Date&);
	~Date();

	int getDay();
	int getMonth();
	int getYear();
	
	void setDay(int);
	void setMonth(int);
	void setYear(int);

	void printTime();


};

