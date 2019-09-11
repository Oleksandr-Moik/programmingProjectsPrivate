#include "pch.h"
#include <iostream>
#include <fstream>
#include <math.h> 
#include <iomanip>

using namespace std;

int main() {
	const double A = 1, B = 1.5, H = 0.1;
	double y, x;
	ofstream f_txt("f1.txt"), f_xls("f2.xls");
	cout << "writing in files\n";
	cout << "  x\t  y\n";
	f_txt << "x\ty\n";
	f_xls << "x\ty\n";
	double sum = 0, k = 0, ser;
	for (x = A; x <= B; x += H) {
		y = log(x) + pow(cos(x), 2);
		cout << x << "\t" << y << "\n";
		f_txt << x << "\t" << y << "\n";
		f_xls << x << "\t" << y << "\n";
		if (y <= 0.34) {
			sum += y;
			k++;
		}
	}
	ser = sum / k;
	cout << "ser = " << setw(10) << ser << "\n";
	f_txt << "ser =" << setw(10) << ser << "\n";
	f_xls << "ser =\t" << ser << "\n";
	f_txt.close();
	f_xls.close();
	
	ifstream in_f_txt("f1.txt");
	if (in_f_txt.is_open()) {
		cout << "\nreading from f1.txt\n";
		char str[100];
		while (!in_f_txt.eof()) {
			in_f_txt.getline(str, 100);
			cout << str << '\n';
		}
		in_f_txt.close();
	}
	else {
		cout << "File in not open!!!\n";
	}
	
	system("pause");
	return 0;
}