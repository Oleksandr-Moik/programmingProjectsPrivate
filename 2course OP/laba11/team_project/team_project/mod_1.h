#pragma once
#ifndef mod_1
#define mod_1

#include <math.h>
#include <iostream>
#include <fstream>

#include "head_mod.h"

using namespace std;

void mediana()
{
	fstream file;
	double m, a, b, c;

	file.open("triple_K.txt", ios::app);
	file << "Медіана:\n";
	
	input_length(a, b, c);
	if (correct(a,b,c))
	{
		m = (1 / 2)*sqrt(2 * (pow(b, 2) + pow(c, 2)) - pow(a, 2));
		cout << "М_a = " << m << endl;
		file << "A = " << a << "\nB = " << b << "\nC = " << c
			<< endl << "M_a = " << m << endl;
	}
	else input_error(a, b, c, file);

	file << "\n";
	file.close();
}

void bisectrisa()
{
	fstream file;
	double a, b, c, p, l;

	file.open("triple_K.txt", ios::app);
	file << "Бісектриса:\n";

	input_length(a, b, c);
	if (correct(a,b,c))
	{
		p = 0.5*(a + b + c);
		l = (2 / (b + c))*sqrt(b*c*p*(p - a));
		cout << "l_a = " << l << endl;
		file << "A = " << a << "\nB = " << b << "\nC = " << c
			<< endl << "l_a = " << l << endl;
	}
	else input_error(a, b, c, file);

	file << "\n";
	file.close();
}
#endif