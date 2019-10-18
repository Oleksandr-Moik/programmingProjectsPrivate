#pragma once
#include <iostream>
#include "B.h"
using namespace std;

class D1 : public B
{
	int d1 = 0;
public:
	D1(int d1, int b) : B(b){
		this->d1 = d1;
		cout << "class D1(" << d1 << ")  public B \n";
	}
	~D1() {
		cout << "D1 destructor\n";
	}
};