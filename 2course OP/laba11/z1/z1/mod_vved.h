#pragma once
#ifndef vved
#define vved

#include <iostream>
#include <fstream>

using namespace std;

const char fname[] = "students.txt";

struct student
{
	char surname[20], name, middle_name;
	int birth_year, hostel, room;
};

void input_new_data();
void empty_file();

void input_new_data() {
	student st[25];
	ofstream file(fname, ios::app);
	cout << "Enter kilkist studentiv: "; 
	int n;  cin >> n;
	
	if (n > 0) {
		for (int i = 0; i < n; i++){
			cin.ignore();
			cout << "\t\tstudent " << i + 1 << ":\n";
			
			cout << "- surname: ";
			cin.getline(st[i].surname, 20);
			
			cout << "- name and midle name (N.M.):";
			cin >> st[i].name;
			cin >> st[i].middle_name;
			
			cout << "- year of birth: ";
			cin >> st[i].birth_year;
			
			cout << "- hostel # and room #: ";
			cin >> st[i].hostel;
			cin >> st[i].room;
			
			file << "\n"
			 << st[i].surname << "\n"
			 << st[i].name
			 << st[i].middle_name
			 << st[i].birth_year << "\n"
			 << st[i].hostel <<"\n"
			 << st[i].room;
		}cout << "Sucses... ";
	}else cout << "Incorect input. Kilkist mast by over 0.\n";
	file.close();
}
void empty_file() {
	ofstream file(fname);
	file.close();
	cout << "Sucses... ";
	cout << "File data was cleaned :(\n";
}
#endif