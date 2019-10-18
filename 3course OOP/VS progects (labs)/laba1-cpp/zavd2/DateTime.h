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
	
	DateTime nextDay(DateTime ob);
	DateTime previousDay(DateTime ob);
	int countEndDays();
	
	DateTime inputDate();
	void showDate();
};
