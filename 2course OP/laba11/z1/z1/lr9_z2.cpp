#include <iostream>
#include <conio.h>
#include <string.h>
#include <ctime>
#define tb <<"\t"<<
#define sp <<" "<<
#define tch "."
using namespace std;
struct student {
	char surname[20], name, middle_name;
	int birth_year, hostel, room;
};
void form(student mas[], int k);
void vivod(student mas[], int k);
void poisk(student mas[], int k);
void tester(student mas[], int &k);
int main_() {
	student st[25];
	int n;
	cout<<"Enter kilkist studentiv: ";cin>>n;form(st,n);
	//tester(st, n);
	vivod(st, n);
	poisk(st, n);
	system("pause");
	return 0;
}
void tester(student mas[], int &k) {
	k = 5;
	srand(time(0));
	cout << "\t\tEnter information about student\n";
	for (int i = 0; i < k; i++) {
		cin.get();
		cout << "\t\tstudent " << i + 1 << ":\n";
		cout << "- first name: ";
		cin.getline(mas[i].surname, 20);
		cout << "- name and middle_namekovi (N P):";
		cin >> mas[i].name; cin >> mas[i].middle_name;
		mas[i].birth_year = rand() % 2 + 2000;
		mas[i].hostel = rand() % 10 + 1;
		mas[i].room = rand() % 2 + 1;
	}
}
void form(student mas[], int k) {
	cout << "\t\tEnter information about student\n";
	for (int i = 0; i < k; i++) {
		cin.get();
		cout << "\t\tstudent " << i + 1 << ":\n";
		cout << "- surname: ";
		cin.getline(mas[i].surname, 20);
		cout << "- name and midle name (N.M.):";
		cin >> mas[i].name; //cin.get();
		cin >> mas[i].middle_name; //cin.get();
		cout << "- year of birth: ";
		cin >> mas[i].birth_year;
		cout << "- hostel # and room #: ";
		cin >> mas[i].hostel; cin >> mas[i].room;
	}
}
void vivod(student mas[], int k) {
	cout << "#" tb "Student" tb "\tyear" tb "hostel" tb "room\n";
	for (int i = 0; i < k; i++) {
		cout << i + 1 tb mas[i].surname sp mas[i].name << tch sp mas[i].middle_name << tch tb mas[i].birth_year tb mas[i].hostel tb mas[i].room << "\n";
	}
}
void poisk(student mas[], int k) {
	char try_test;
	do {
		cout << "Select search mode:\n"
			<< "1 - students in hostel and year of birth;\n"
			<< "2 - students in room and in 2 another hostel.\n";
		int q; cin >> q;
		switch (q) {
		case 1: {
			int year, hostel;
			cout << "Enter year: "; cin >> year;
			cout << "Enter hostel: "; cin >> hostel;
			cout << "Student" tb "\troom\n";
			for (int i = 0; i < k; i++)
				if ((year == mas[i].birth_year) && (hostel == mas[i].hostel)) 
					cout << mas[i].surname sp mas[i].name << tch sp mas[i].middle_name << tch tb mas[i].room << "\n";
			break;
		}
		case 2: {
			int hos1, hos2, room;
			cout << "Room: "; cin >> room;
			cout << "Hostel 1: "; cin >> hos1;
			cout << "Hostel 2: "; cin >> hos2;
			cout << "Student" tb "\tyear\n";
			for (int i = 0; i < k; i++)
				if ((mas[i].room == room) && ((mas[i].hostel == hos1) || (mas[i].hostel == hos2)))
					cout << mas[i].surname sp mas[i].name << tch sp mas[i].middle_name << tch tb mas[i].birth_year << "\n";
			break;
		}
		default:
			cout << "Wrong choice\n";
			break;
		}
		cout << "Try again ? (Y / N)\n";cin >> try_test;
	} while ((try_test == 'y') || (try_test == 'Y'));
}
/*
6
Kuz
VI 
2000 
5 23
Melnik
VM 
2001 
4 12
Gah 
BF 
2000 
5 25
Jek
BG 
2000 
3 5
Krut 
BJ 
2002 
3 12
Popov
OV 
2001 
5 12


1
2000
5
y
2
12
4
3
n

*/