#pragma once
#include <iostream>
#include "B.h"
using namespace std;

class D3 : private B
{
	int d3 = 0;
public:
	D3(int d3, int b) : B(b) {
		this->d3 = d3;
		cout << "class D3(" << d3 << ") private B \n";
	}
	~D3() {
		cout << "D3 destructor\n";
	}
};