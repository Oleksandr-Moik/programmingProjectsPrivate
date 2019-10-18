#pragma once
#include <iostream>
#include "B.h"
using namespace std;

class D2 : private B
{
	int d2 = 0;
public:
	D2(int d2, int b) : B(b) {
		this->d2 = d2;
		cout << "class D2(" << d2 << ") private B \n";
	}
	~D2() {
		cout << "D2 destructor\n";
	}
};