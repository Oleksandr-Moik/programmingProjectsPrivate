#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	cout.setf(ios::fixed);
	cout.precision(10);
	const float a = 0.9;
	double x, y;
	cin >> x;
	if (x > 1)	y = a * log10(x) + pow( abs(x), 1 / 3);
	else		y = 2 * a * cos(x) + 3 * x * x;
	cout << y;

	_getch();
	return 0;
}

