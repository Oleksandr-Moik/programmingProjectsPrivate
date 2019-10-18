#pragma once
#include <iostream>
#include "D1.h"
using namespace std;

class D4 : private D1
{
	int d4=0;
public:
	D4(int d4, int d1, int b) : D1(d1,b) {
		this->d4 = d4;
		cout << "class D4(" << d4 << ") private D1\n";
	}
	~D4() {
		cout << "D4 destructor\n";
	}
};