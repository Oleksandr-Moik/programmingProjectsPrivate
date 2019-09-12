#include "Ceh.h"

#include <iostream>

using namespace std;

Ceh::Ceh():name(NULL),director(NULL),workers(0) {
	cout << "simple create\n";
}
Ceh::Ceh(char* name, char* director, int workers) : name(name), director(director), workers(workers) {
	cout << "Constructor with params\n";
	/*this->name = name;
	this->director = director;
	this->workers = workers;*/
}
Ceh::Ceh(const Ceh& ceh) {
	cout << "Construct-copy: " << ceh.name << endl;
	this->name = ceh.name;
	this->director = ceh.director;
	this->workers = ceh.workers;
}
Ceh::~Ceh() {
	cout << "DELETED:  \n";
	this->showAllParams();
}

char* Ceh::getName() {
	return this->name;
}
char* Ceh::getDirector() {
	return this->director;
}
int Ceh::getWorkersCount() {
	return this->workers;
}

void Ceh::setName(char* name) {
	cout << "setName:   " << name << endl;
	this->name = name;
}
void Ceh::setDirector(char* director) {
	cout << "setDirector:   " << director << endl;
	this->director = director;
}
void Ceh::setWorkerCount(int count) {
	cout << "setWorkerCount:   " << count << endl;
	this->workers = count;
}

void Ceh::showAllParams() {
	cout << "Ceh values: "
		<< "[Name = " << this->name
		<< "], [Director = " << this->director
		<< "], [Workers = " << this->workers << "]\n";
}