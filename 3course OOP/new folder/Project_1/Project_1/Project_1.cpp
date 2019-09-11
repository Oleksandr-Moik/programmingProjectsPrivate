// Project_1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "vurib.h"
//#include <string.h>
using namespace std;

void print(vurib ob)
{
	cout << "druk z funkcii";
	ob.printvurib();
}


int _tmain(int argc, _TCHAR* argv[])
{
	int sv = 0;
	vurib k;
	vurib f;
	vurib r;
	vurib n("noytbook", "lenovo", 3);
	k.printvurib();
	n.printvurib();
	k.Setname("komputer");
	k.Setshufr("asus");
	k.Setkilk(6);
	k.printvurib();
	f.Setvurib("monitor", "LG", 7);
	print(f);
	r = f;
	r.Setname("planshet");
	r.printvurib();
	sv = n.GetKilkist() + k.GetKilkist() + f.GetKilkist() + r.GetKilkist();
	cout << "suma vsih vurobiv " << sv << endl;

	system("pause");
	return 0;
}

