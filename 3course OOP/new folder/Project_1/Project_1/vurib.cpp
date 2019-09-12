#include "stdafx.h";
#include <iostream>;
#include "vurib.h";

using namespace std;

vurib::vurib() :name(""), shufr(""), kilk(0)
{
	cout << "vuklukano konstruktor bez parametriv" << this << endl;
}
vurib::vurib(char* n, char* k, int v) : name(n), shufr(k), kilk(v)
{
	cout << "vuklukano konstruktor z parametrom dlia " << name << endl;
}
vurib::vurib(const vurib&)
{
	cout << "vuklukan konstruktor copiuvania dlia " << name << endl;
}
vurib::~vurib()
{
	cout << "vuklukano destruktor" << name << endl;
}

char* vurib::GetName()
{
	return name;
}
char* vurib::GetShufr()
{
	return shufr;
}
int vurib::GetKilkist()
{
	return kilk;
}

void vurib::Setname(char* n)
{
	name = n;
}
void vurib::Setshufr(char* k)
{
	shufr = k;
}
void vurib::Setkilk(int v)
{
	kilk = v;
}
void vurib::Setvurib(char* n, char* k, int v)
{
	name = n, shufr = k, kilk = v;
}
void vurib::printvurib()
{
	cout << "imia " << name << " shufr " << shufr << " kilk " << kilk << endl;
}
