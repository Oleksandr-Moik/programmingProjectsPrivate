#include "pch.h"
#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	const int  n = 5, m = 5;
	int matrix[m],i,j;
	char fname[] = "matrix.bin";
	ofstream f_out(fname);
	for (i = 0; i < n; i++)
	{
		cout << "Line " << i + 1<<": ";
		for (j = 0; j < m; j++)
		{
			matrix[j] = rand() % 10;
			cout << matrix[j]<<"  ";
		}
		f_out.write((char*)&matrix, sizeof matrix);
		cout << endl;
	}
	f_out.close();

	ifstream f_in(fname, ios::binary);
	if (f_in.is_open()) {
		cout << "\nReading...\n";
		for (i = 0; i < n; i++)
		{
			f_in.read((char*) &matrix, sizeof matrix);
			for (j = 0; j < n - i; j++) {
				cout << setw(3) << matrix[j];
			}
			cout << endl;
		}
		cout << endl;
	}
	else {
		cout << "File not open!!!\n";
	}
	
	system("pause");
	return 0;
}
