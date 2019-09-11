#pragma once

#include <ctime>
#include <math.h>

const double eps = 0.00001;

double SquareRoot(double b);
double NSD(int a, int b);
double f_Sin(double x);
double f_Cos(double x);
double f_pow(int a, int b);
int Factorial(int a);

double SquareRoot(double a) {
	double x1, x0 = 1;
	x1 = 0.5*(x0 + a / x0);
	while (fabs(x1 - x0) > eps) {
		x0 = x1;
		x1 = 0.5*(x0 + a / x0);
	}
	return x1;
}
int Factorial(int a) {
	if (a > 1) return a * Factorial(a - 1);
	else return 1;
}
double NSD(int a, int b) {
	int m;
	while ((a > 0) && (b > 0))
		a > b ? a %= b : b %= a;
	if (a == 0)m = b;
	else m = a;
	return m;
}
double f_Sin(double x) {
	double a, s;
	int n2;
	s = a = x;
	n2 = 1;
	while (fabs(a) > eps) {
		a = ((-a)*x*x) / ((n2 + 1)*(n2 + 2));
		s += a;
		n2 += 2;
	}
	return s;
}
double f_Cos(double x) {
	double a, s;
	int p;
	p = s = 0;
	a = 1;
	while (fabs(a) > eps) {
		s += a;
		p++;
		a = ((-a)*x*x) / ((2 * p - 1)*(2 * p));
	}
	return s;
}
double f_pow(int a, int b) {
	double dob = 1;
	for (int i = 0; i < abs(b); i++)dob *= a;
	if (b < 0)dob = 1 / dob;
	return dob;
}