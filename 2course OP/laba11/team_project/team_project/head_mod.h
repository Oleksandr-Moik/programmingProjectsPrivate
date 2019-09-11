#pragma once
#ifndef head_mod
#define head_mod

#include <fstream>
#include <iostream>

using namespace std;

void clr() {
	system("cls");
}
void paus_e() {
	cout << "Натисніть будь-яку клавішу щоб повернутися до головного меню...";
	_getch();
	clr();
}

void clear_file() {
	fstream out;
	out.open("triple_K.txt", ios::out);
	out.close();
}
void input_length(double &a, double &b, double &c) {
	cout << "Введіть сторони:\n";
	cout << "A = "; cin >> a;
	cout << "B = "; cin >> b;
	cout << "C = "; cin >> c;
}

void input_error(double a, double b, double c, fstream &out_f) {
	cout << "Некоректні дані.\n";
	out_f << "A =" << a << "\nB =" << b << "\nC =" << c
		<< endl << "Некоректні дані.\n";
}

bool correct(double a, double b, double c) {
	if ((a > 0) && (b > 0) && (c > 0) && (a + b > c) && (a + c > b) && (b + c > a))
		return true;
	else return false;
}

#endif