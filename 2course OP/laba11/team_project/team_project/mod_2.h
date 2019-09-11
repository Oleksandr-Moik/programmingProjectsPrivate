#pragma once
#ifndef mod_2
#define mod_2

#include <math.h>
#include <iostream>
#include <fstream>

#include "head_mod.h"

using namespace std;

void ploshcha()
{
	fstream file;
	double p, S, a, b, c;

	file.open("triple_K.txt", ios::app);
	file << "Площа:\n";

	input_length(a, b, c);
	if (correct(a, b, c))
	{
		p = (a + b + c) / 2;
		S = sqrt(p*(p - a)*(p - b)*(p - c));
		cout << "S = " << S << endl;
		file << "A = " << a << "\nB = " << b << "\nC = " << c
			<< endl << "S = " << S << endl;
	}
	else input_error(a, b, c, file);

	file << "\n";
	file.close();
}

void perimetr()
{
	fstream file;
	double P, a, b, c;

	file.open("triple_K.txt", ios::app);
	file << "Периметр:\n";

	input_length(a, b, c);
	if (correct(a, b, c))
	{
		P = a + b + c;
		cout << "P = " << P << endl;
		file << "A = " << a << "\nB = " << b << "\nC = " << c
			<< endl << "P = " << P << endl;
	}
	else input_error(a, b, c, file);

	file << "\n";
	file.close();
}

void visota()
{
	fstream file;
	double S, ha, a, b, c, p;

	file.open("triple_K.txt", ios::app);
	file << "Висота:\n";

	input_length(a, b, c);
	if (correct(a, b, c))
	{
		p = (a + b + c) / 2;
		S = sqrt(p*(p - a)*(p - b)*(p - c));
		ha = 2 * S / a;
		cout << "h_a = " << ha << endl;
		file << "A = " << a << "\nB = " << b << "\nC = " << c
			<< endl << "\nh_a =" << ha;
	}
	else input_error(a, b, c, file);

	file << "\n";
	file.close();
}
#endif