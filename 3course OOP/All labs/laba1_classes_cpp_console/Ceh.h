#pragma once

using namespace std;

class Ceh
{
	char name[50];
	char director[30];
	int workers;

public:
	Ceh() {
		cout << "simple create\n";
	}
	Ceh(const char name[50], const char director[30], int workers) {
		strcpy_s(this->name, name);
		strcpy_s(this->director, director);
		this->workers = workers;
		//debug ingo
		cout << "Constructor with params: "
			<< "[Name = " << name
			<< "], [Director = " << director
			<< "], [Workers = " << workers << "]\n";
	}
	Ceh(const Ceh& ceh) {
		cout << "Construct-copy: " << ceh.name << endl;
		strcpy_s(this->name, ceh.name);
		strcpy_s(this->director, ceh.director);
		this->workers = ceh.workers;
	}
	~Ceh() {
		cout << "DELETE \n";
		this->showAllParams();
	}

	char* getName() {
		return this->name;
	}
	char* getDirector() {
		return this->director;
	}
	int getWorkersCount() {
		return this->workers;
	}

	void setName(const char name[50]) {
		cout << "setName:   " << name << endl;
		strcpy_s(this->name, name);
	}
	void setDirector(const char director[30]) {
		cout << "setDirector:   " << director << endl;
		strcpy_s(this->director, director);
	}
	void setWorkerCount(int count) {
		cout << "setWorkerCount:   " << count << endl;
		this->workers = count;
	}

	void showAllParams() {
		cout << "Ceh values: "
			<< "[Name = " << this->name
			<< "], [Director = " << this->director
			<< "], [Workers = " << this->workers << "]\n";
	}
};
