#include "Ceh.h"

#include <iostream>

using namespace std;

Ceh::Ceh() :name(""), director(""), workers(0) {
	cout << "simple create\n";
}
Ceh::Ceh(const char* name, const char* director, int workers) {
	cout << "Constructor with params\n";
	strcpy_s(this->name, name);
	strcpy_s(this->director, director);
	this->workers = workers;
}
Ceh::Ceh(const Ceh& ceh) {
	cout << "Construct-copy\n";
	strcpy_s(this->name, ceh.name);
	strcpy_s(this->director, ceh.director);
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

void Ceh::setName(const char* name) {
	strcpy_s(this->name, name);
}
void Ceh::setDirector(const char* director) {
	strcpy_s(this->director, director);
}
void Ceh::setWorkerCount(int count) {
	this->workers = count;
}

void Ceh::showAllParams() {
	cout << "Ceh values: "
		<< "[Name = " << this->name
		<< "], [Director = " << this->director
		<< "], [Workers = " << this->workers << "]\n";
}