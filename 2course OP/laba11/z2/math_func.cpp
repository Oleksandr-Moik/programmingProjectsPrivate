#include <iostream>
#include <ctime>
#include <math.h>

#include "mymath.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	double a, b, g, n;
	cout << "vvedit sqrt(n), n=";cin >> n;
	cout << "sqrt:\t" << SquareRoot(n) << "\t" << sqrt(n) << "\n";
	
	cout << "vvedit NSD(a,b), a="; cin >> a;
	cout << "b="; cin >> b;
	cout << "NSD:\t" << NSD(a, b) << "\n";
	
	cout << "vvedit kut: "; cin >> g;
	cout << "sin:\t" << f_Sin(g) << "\t" << sin(g) << "\n";
	cout << "cos:\t" << f_Cos(g) << "\t" << cos(g) << "\n";

	cout << "**pow***\n";
	cout << "vvedit chuslo: "; cin >> a;
	cout << "vvedit stepin: "; cin >> b;
	cout << "pow(" << a << "," << b << "):\t" << f_pow(a, b) << "\t" << pow(a, b) << "\n";
	
	cout << "vvedit n!, n="; cin >> n;
	cout << n << "! = " << Factorial(n)<<"\n";

	system("pause");
	return 0;
}