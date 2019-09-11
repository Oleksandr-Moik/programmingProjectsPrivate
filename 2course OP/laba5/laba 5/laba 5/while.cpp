#include <iostream>
#include <conio.h>
#include <math.h>
#define M_E        2.71828182845904523536
using namespace std;
int main_while(){
	setlocale(LC_ALL, "ru");
	double b, h, y, x, d=1, k=0;
	cin >> x >> b >> h;
	cout << "x\ty" << endl;
	while (x <= b) {
		y = pow(M_E, 1+x);
		if (y>4,12)	{
			k++;
			d*=y;
		} x+=h;	
		cout << x << "\t" <<   y << endl;
	}
	if (d==1) cout << "Таких значень немає" << endl;
	else	cout << "d = " << d << "\nkilk = " << k << endl;
	_getch();
	return 0;
}