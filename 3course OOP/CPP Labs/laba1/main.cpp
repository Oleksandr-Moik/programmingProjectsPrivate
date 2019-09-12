#include <iostream>
#include "Ceh.h"

using namespace std;

void space() {
	cout << "\n\n";
}

int main()
{
	Ceh ceh1 = Ceh();
	Ceh ceh2 = Ceh("hztp", "Ghans V. G.", 23);
	Ceh ceh3 = Ceh(ceh2);

	space();
	cout << "ceh2 SHOW\n";
	ceh2.showAllParams();

	space();
	cout << "GETTERS(ceh2)"
		<< "Name = " << ceh2.getName()
		<< "Director = " << ceh2.getDirector()
		<< "Workers = " << ceh2.getWorkersCount();

	space();
	cout << "SETTERS\n";
	cout << "ceh1\n";
	ceh1.setName("hrd");
	ceh1.setDirector("Porg R. A.");
	ceh1.setWorkerCount(12);

	cout << "ceh3\n";
	ceh3.setWorkerCount(30);

	space();
	cout << "ceh1 SHOW\n";
	ceh1.showAllParams();

	space();
	cout << "ceh3 SHOW\n";
	ceh3.showAllParams();
}
