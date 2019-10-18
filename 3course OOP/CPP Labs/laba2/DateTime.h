#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class DateTime
{
private:
	unsigned short int day;
	unsigned short int month;
	unsigned int year;
public:
	DateTime();
	DateTime(unsigned short int d, unsigned short int m, unsigned int y);
	~DateTime();
	
	void setAll(unsigned short int d, unsigned short int m, unsigned int y);
	
	int getYear();
	int getMounth();
	int getDay();
	
	DateTime nextDay(DateTime);
	DateTime previousDay(DateTime);
	int countEndDays();
	
	DateTime inputDate();
	void showDate();

	bool operator&(DateTime);
	bool operator!();
	operator bool();
	string toString();
};
