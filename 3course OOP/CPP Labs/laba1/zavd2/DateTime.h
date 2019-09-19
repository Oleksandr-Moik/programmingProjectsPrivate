#pragma once
class DateTime
{
private:
	short int day;
	short int month;
	int year;


public:
	DateTime();
	DateTime(short int, short int, int);
	DateTime(const DateTime&);
	~DateTime() {};

	int getDay();
	int getMonth();
	int getYear();


	void setDay(short int);
	void setMonth(short int);
	void setYear(int);
	DateTime inputData();

	void printTime();
};

