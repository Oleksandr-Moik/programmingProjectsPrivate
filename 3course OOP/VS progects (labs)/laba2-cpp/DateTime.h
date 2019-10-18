<<<<<<< HEAD
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

=======
>>>>>>> 386cfae9f3a642fb72f665a933f3c73f0ffc7cc0
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
<<<<<<< HEAD
	operator bool();
	string toString();
=======
	bool logic();
	operator string() {
		string result = "";



		return result;
	}
>>>>>>> 386cfae9f3a642fb72f665a933f3c73f0ffc7cc0
};
