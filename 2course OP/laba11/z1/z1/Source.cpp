#include <iostream>
#include <iomanip>
#include <conio.h>

#include "mod_vuvid.h"
#include "mod_vved.h"
using namespace std;

int mmain() {
	setlocale(LC_ALL, "rus");

	bool working = 25;
	int n;
	do {
		system("cls");
		cout << "Switch program mode:\n";
		cout << "1 - input new data\n"
			<< "2 - output all data\n"
			<< "3 - search of ...\n"
			<< "4 - empty data\n"
			<< "5 - exit\n";
		cin >> n;
		system("cls");

		switch (n){
			case 1: 
				cout << "\t***Input new data***\n";
				input_new_data();break;
			case 2:
				cout << "\t***Output all data***\n";
				output_all_data();break;
			case 3:
				cout << "\t***Search***\n";
				func_search();break;
			case 4:
				cout << "You are sure...(Y/N): ";
				char k; cin >> k;
				if ((k == 'Y') || (k == 'y'))empty_file();
				else cout << "Task closed :)\n";
				cout << "press any key to continue...";
				break;
			case 5:	working = 0; return 0; break;
			default:
				cout << "incorect input nomber. Please, try again.\n";
				break;
			}
		_getch();
	} while (working);

	cout << "Progrm is stoped. Press any to close window...";
	_getch();return 0;
}