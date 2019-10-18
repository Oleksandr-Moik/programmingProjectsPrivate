#pragma once
#include <iostream>
#include "D1.h"
#include "D2.h"
#include "D3.h"

using namespace std;

class D5 : public D1, D2, private D3
{
	int d5=0;
public:
	D5(int d5, int d3, int d2,int d1, int b) : D3(d3, b), D2(d2,b), D1(d1, b) {
		this->d5 = d5;
		cout << "class D5(" << d5 << "), predok public D1, D2, private D3" << endl;
	}
	~D5() {
		cout << "D5 destructor\n";
	}
};