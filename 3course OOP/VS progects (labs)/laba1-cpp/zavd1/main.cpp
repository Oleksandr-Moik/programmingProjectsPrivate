#include <iostream>
#include "Ceh.h"
using namespace std;

void space() { cout << "\n\n"; }

int main(){
	Ceh ceh1;
	ceh1.showAllParams();
	Ceh ceh2 = Ceh("hztp", "Ghans V. G.", 23);
	Ceh ceh3, *ceh4 = new Ceh();

	space();
	cout << "SHOW ceh2:\t";
	ceh2.showAllParams();
	ceh3 = Ceh(ceh2);
	cout << "SHOW ceh3:\t";
	ceh3.setWorkerCount(30);
	ceh3.showAllParams();
	ceh4 = &ceh3;
	cout << "SHOW ceh4:\t";
	ceh4->setDirector("new direct");
	ceh4->showAllParams();
	
	space();
	cout << "SETTERS\n" << "ceh1 before\t";
	ceh1.showAllParams();
	ceh1.setName("hrd");
	ceh1.setDirector("Porg R. A.");
	ceh1.setWorkerCount(12);
	cout << "ceh1 after\t";
	ceh1.showAllParams();

	space();
	cout << "GETTERS(ceh2)\n";
	printf("getName=%s, getDirector=%s, getWorkers=%d\n",
		ceh2.getName(),	ceh2.getDirector(),	ceh2.getWorkersCount());
	
	space();
	cout << "Static array\n";
	Ceh array[3] = { 
		Ceh("Ivanov","Afgwgsg F. F.",50),
		Ceh("Petrova","Mdsdfsg K. L.",18),
		Ceh("Sudorov","Klnkdfg J. R.",18) };
	for (Ceh ceh : array)ceh.showAllParams();
	
	space();
	cout << "Dinamic array\n";
	Ceh* p;
	p = new Ceh[3];
	int i = 0;
	for (Ceh ceh : array) {p[i] = array[i];i++;}

	space();
	cout << "Void reference\n";
	void (Ceh::*pf)();
	pf = &Ceh::showAllParams;
	(p[1].*pf)();

	space();
}