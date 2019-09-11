#include "pch.h"
#include <iostream>
#include <fstream>
#include <math.h> 
#include <iomanip>

using namespace std;

int main() {
	ofstream rezult("result.txt");
	const double eps = 0.001;
	double sum = 0, a, x = 0.34;
	int k = 1, fact = 2;
	a = -pow(2 * x, 2) / fact;
	while (fabs(a) > eps) {
		//rezult<<k<<'\t'<<a<<'\n';
		sum += a;
		k++;
		fact *= 2 * k;
		a = pow(-1., k)*pow(2 * x, 2 * k) / fact;
	}
	rezult << "sum = " << sum << '\n';
	rezult.close();
	system("pause");
	return 0;
}