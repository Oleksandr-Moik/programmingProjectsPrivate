#include <iostream>
#include "DateTime.h"

using namespace std;

int main()
{
	int n;
	cout << "Enter count of dates:";
	cin >> n;
<<<<<<< HEAD
	DateTime* timeObj = new DateTime[n + 1];
	timeObj[0] = DateTime(1, 1, 2019);
	for (int i = 1; i <= n; ++i)
	{
		cout << "Enter date #" << i << "\n";
		timeObj[i].inputDate();
		cout << "Days to end this month: " << timeObj[i].countEndDays() << "\n";
		DateTime tmp;
		cout << "Date next day: ";
		tmp.nextDay(timeObj[i]).showDate();
		cout << "Date previous day: ";
		tmp.previousDay(timeObj[i]).showDate();
		cout << endl;

		string t = !timeObj[i] ? "true" : "false";;
		cout << "Not last day of month: " <<  t << "\n";
		t = timeObj[i] ? "true" : "false";;
		cout << "First day of year: " << t << "\n";

		cout << "Compare previos date and this date:\n";
		cout << "Previous date " << timeObj[i - 1].toString() << "\n";
		cout << "This date " << timeObj[i].toString() << "\n";
		t = (timeObj[i - 1] & timeObj[i]) ? "true" : "false";
		cout << "Compare: " << t << "\n";

		cout << endl;
	}

=======
	DateTime *ob=new DateTime[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Enter date #" << i + 1 << "\n";
		ob[i].inputDate();
		cout << "Days to end this month: " << ob[i].countEndDays() << "\n";
		DateTime tmp;
		cout << "Date next day: ";
		tmp.nextDay(ob[i]).showDate();
		cout << "Date previous day: ";
		tmp.previousDay(ob[i]).showDate();
		cout << endl;
	}
	
>>>>>>> 386cfae9f3a642fb72f665a933f3c73f0ffc7cc0
	return 0;
}