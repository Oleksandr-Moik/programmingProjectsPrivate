#pragma once
#include <iostream>
using namespace std;

class B
{
	int b = 0;
public:
	B(int b) {
		this->b = b;
		cout << "class B(" << b << ")\n";
	}
	~B() {
		cout << "B destructor\n";
	}
};