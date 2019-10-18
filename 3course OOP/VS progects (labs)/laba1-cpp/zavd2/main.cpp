#include <iostream>
#include "DateTime.h"

using namespace std;

int main()
{
	int n;
	cout << "Enter count of dates:";
	cin >> n;
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

	return 0;
}