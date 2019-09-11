#pragma once
#ifndef vuvid
#define vuvid

#include "mod_vved.h"

void output_all_data();
void func_search();

void output_all_data() {
	student st;
	ifstream file(fname);
	if (file.is_open()) {
		char str[20];
		cout << "# Student" << "\tyear" << "  hostel" << "  room\n";
		int i = 0;
		while (!file.eof()) {
			i++;
			file.getline(str, 20);
			file >> st.name >> st.middle_name;
			file >> st.birth_year >> st.hostel >> st.room; file.get();
		
			cout << i << " " << str << " "
				<< st.name << ". " << st.middle_name << ".\t"
				<< st.birth_year << "\t" << st.hostel << "\t"
				<< st.room << "\n";
		}cout << "Sucses... ";
	}else cout << "File can not find!!!\n";
	file.close();
}

void func_search() {
	student st;
	ifstream file(fname);
	cout << "Select search mode:\n"
		<< "1 - students in hostel and year of birth;\n"
		<< "2 - students in room and in 2 another hostel.\n"
		<< "5 - Return to main menu\n";
	int q; cin >> q;
	char str[20], buff;
	
	switch (q) {
		case 1: {
			int year, hostel;
			cout << "Enter year: "; cin >> year;
			cout << "Enter hostel: "; cin >> hostel;
			cout << "Student" << "\t" << "\troom\n";
			if (file.is_open()) {
				while (!file.eof()) {
					file.getline(str, 20);
					file >> st.name >> st.middle_name;
					file >> st.birth_year >> st.hostel >> st.room; file.get();

					if ((year == st.birth_year) && (hostel == st.hostel))
						cout << str << " "
						<< st.name << ". "
						<< st.middle_name << ".\t"
						<< st.room << "\n";
				}cout << "Sucses... ";
			}else cout << "File can not find!!!\n";
			break;
		}
		case 2: {
			int hos1, hos2, room;
			cout << "Room: "; cin >> room;
			cout << "Hostel 1: "; cin >> hos1;
			cout << "Hostel 2: "; cin >> hos2;
			cout << "Student" << "\t" << "\t" << "year" << "  room" << "\n";
			if (file.is_open()) {
				while (!file.eof()) {
					file.getline(str, 20);
					file >> st.name >> st.middle_name;
					file >> st.birth_year >> st.hostel >> st.room; file.get();

					if ((st.room == room) &&
						((st.hostel == hos1) || (st.hostel == hos2)))
						cout << str << " "
						<< st.name << ". "
						<< st.middle_name << ".\t"
						<< st.birth_year << "  "
						<< st.room << "\n";
				}cout << "Sucses... ";
			}else 	cout << "File can not find!!!\n";
			break;
		}
		case 5: cout << "press any key..."; break;
		default:
			cout << "Wrong choice\n";
			break;
	}
	file.close();
}
#endif