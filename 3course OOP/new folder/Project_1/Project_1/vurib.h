#pragma once

#include <iostream>;
using namespace std;

class vurib
{
private:
	char* name;
	char* shufr;
	int kilk;
public:
	vurib(void);
	vurib(char* n, char* k, int v);
	vurib(const vurib&);
	~vurib();
	char* GetName();
	char* GetShufr();
	int GetKilkist();
	void Setname(char* n);
	void Setshufr(char* k);
	void Setkilk(int v);
	void Setvurib(char* n, char* k, int v);
	void printvurib();
};
