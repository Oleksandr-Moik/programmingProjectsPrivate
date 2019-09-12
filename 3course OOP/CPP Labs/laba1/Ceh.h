#pragma once
class Ceh
{
private:
	char* name;
	char* director;
	int workers;

public:
	Ceh();
	Ceh(char* name, char* director, int workers);
	Ceh(const Ceh&);
	~Ceh();

	char* getName();
	char* getDirector();
	int getWorkersCount();

	void setName(char*);
	void setDirector(char*);
	void setWorkerCount(int);
	void showAllParams();
};

