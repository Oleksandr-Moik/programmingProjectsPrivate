#pragma once
class Ceh
{
private:
	char name[30];
	char director[30];
	int workers;

public:
	Ceh();
	Ceh(const char* name, const char* director, int workers);
	Ceh(const Ceh&);
	~Ceh();

	char* getName();
	char* getDirector();
	int getWorkersCount();

	void setName(const char*);
	void setDirector(const char*);
	void setWorkerCount(int);
	void showAllParams();
};

