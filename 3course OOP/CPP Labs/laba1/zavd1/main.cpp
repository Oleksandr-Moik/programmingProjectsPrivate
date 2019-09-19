#include <iostream>
#include "Ceh.h"
using namespace std;

void space() { cout << "\n\n"; }

int main(){
	Ceh ceh1, ceh3;
	Ceh ceh2 = Ceh("hztp", "Ghans V. G.", 23);

	space();
	cout << "SHOW ceh2\n";
	ceh2.showAllParams();
	ceh3 = Ceh(ceh2);
	cout << "SHOW ceh3\n";
	ceh3.showAllParams();

	space();
	cout << "GETTERS(ceh2)" << endl
		<< "Name = " << ceh2.getName() << endl
		<< "Director = " << ceh2.getDirector() << endl
		<< "Workers = " << ceh2.getWorkersCount() << endl;

	space();
	cout << "SETTERS\n";
	cout << "ceh1\n";
	ceh1.setName("hrd");
	ceh1.setDirector("Porg R. A.");
	ceh1.setWorkerCount(12);
	ceh1.showAllParams();

	cout << "\nceh3\n";
	ceh3.setWorkerCount(30);
	cout << "SHOW ceh3\n";
	ceh3.showAllParams();
	space();
}