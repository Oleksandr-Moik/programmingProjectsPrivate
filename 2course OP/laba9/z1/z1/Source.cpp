#include <iostream>
#include <conio.h>
#include <string.h>
#include <ctime>
#define tb <<"\t"<<

using namespace std;
struct EOM {
	char type_CPU[30];
	unsigned int year;
	double frequency_CPU, RAM, HDD, price;
};

void form(EOM mas[], int k);
void vivod(EOM mas[], int k);
void find(EOM mas[], int k);
void tester(EOM mas[], int &k);
/*
void main()
{
	EOM computers[50];
	int i,n;

	//cout<<"Enter kilkist EOM: ";cin>>n; form(computers,n);

	tester(computers,n);
	vivod(computers,n);
	find(computers,n);

	cout <<"n "<< n <<endl;
	system("pause");
	return;
}*/
void tester(EOM mas[], int &k) {
	k = 3;
	srand(time(0));
	for (int i = 0; i < k; i++)
	{
		cout << "\t\tEOM " << i + 1 << ":\n";
		cout << "- type of CPU: ";
		cin.getline(mas[i].type_CPU, 30);

		mas[i].RAM = (rand() % 4 + 1) * 8;
		mas[i].HDD = (rand() % 10 + 1) * 128;
		mas[i].price = (rand() % 20 + 20) * 1000 + rand() % 500;
		mas[i].frequency_CPU = rand() % 20 + (rand() % 10) / 10.0;
		mas[i].year = rand() % 19 + 2000;
	}
}

void form(EOM mas[], int k) {
	cout << "\t\tEnter information about EOM\n";
	for (int i = 0; i < k; i++)
	{
		cin.get();
		cout << "\t\tEOM " << i + 1 << ":\n";
		cout << "- type of CPU: ";
		cin.getline(mas[i].type_CPU, 30);
		cout << "- RAM (GB):"; cin >> mas[i].RAM;
		cout << "- HDD memory (GB): "; cin >> mas[i].HDD;
		cout << "- Price CPU: "; cin >> mas[i].price;
		cout << "- Frequency (GHz): "; cin >> mas[i].frequency_CPU;
		cout << "- Year: "; cin >> mas[i].year;
	}
}
void vivod(EOM mas[], int k) {
	cout << "#" tb "Type" tb "RAM" tb "HDD" tb "Price" tb "GHz" tb "Year\n";
	for (int i = 0; i < k; i++) {
		cout << i + 1 tb mas[i].type_CPU tb mas[i].RAM tb mas[i].HDD tb mas[i].price tb mas[i].frequency_CPU tb mas[i].year;
		cout << "\n";
	}
}
void find(EOM mas[], int k) {
	float find;
	cout << "Enter price for search: ";
	cin >> find;
	cout << "EOM cheaper " << find << endl;
	cout << "#" tb "Type" tb "RAM" tb "HDD" tb "Price" tb "GHz" tb "Year\n";
	for (int i = 0; i < k; i++)
		if (mas[i].price < find)
			cout << i + 1 tb mas[i].type_CPU tb mas[i].RAM tb mas[i].HDD tb mas[i].price tb mas[i].frequency_CPU tb mas[i].year << endl;
	cout << "\n";

}