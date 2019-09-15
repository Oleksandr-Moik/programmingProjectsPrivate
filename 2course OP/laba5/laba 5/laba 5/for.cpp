#include <iostream>
#include <math.h>	
#include <conio.h>
#define M_E        2.71828182845904523536
using namespace std;
int main_for(){
	setlocale(LC_ALL, "ru");
	double x, a, b, h, y, d=1, k=0;
	cin >> a >> b >> h;
	cout << "x\ty" << endl;
	for (x = a; x <= b; x+=h)	{
		y = pow(M_E, 1+x);
		if (y>4,12)	{
			k++;
			d*=y;
		}
		cout << x << "\t" <<   y << endl;
	}
	if (d==1) cout << "Таких значень немає" << endl;
	else	cout << "d = " << d << "\nkilk = " << k << endl;
	_getch();
	return 0;
}