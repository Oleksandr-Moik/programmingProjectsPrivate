#include <iostream>
#include <cstring>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#pragma warning(disable : 4996)
using namespace std;

int main() {
	char my_str[1000], buff[1000];
	cin.getline(my_str, 1000);

	int n = strlen(my_str);
	int i, j;

	/// ЗАЙВІ ПРОПУСКИ
	for (i = 0, j = 0; my_str[i]; i++) {
		if ((my_str[i] == ' ') && (my_str[i + 1] == ' '))continue;
		buff[j] = my_str[i];
		j++;
	}
	if (buff[j - 1] == ' ')buff[j - 1] = '\0';
	else buff[j] = '\0';

	if (buff[0] == ' ')
		for (i = 0; buff[i - 1]; i++)my_str[i] = buff[i + 1];
	for (i = 0; buff[i]; i++)buff[i] = '\0';

	/// перетворення в малу літеру
	strlwr(my_str);
	/*
	  sdfsfjh    asddsa  gfjhg gfg   fgjhjdgh ffggff ffgff fhjkgf   .   //
	*/
	/// ПАЛІНДРОМИ
	int start = 0, end, q = 0;
	char palid = 'n';
	for (i = 0; my_str[i]; i++)
	{
		if ((my_str[i+1] == ' ') || (my_str[i + 1] == '\0'))
		{
			end = i;
			for (j = start; j <= end / 2 + 1; j++)
			{
				if (my_str[j] != my_str[end - j])
				{
					palid = 'n';
					break;
				}
				else palid = 'y';
				cout << my_str[j] << " & " << my_str[end - j] <<"   "<< palid <<endl;
			}

			if (palid == 'n')
			{
				for (j = start; j < end; j++)
				{
					buff[q] = my_str[j];
					q++;
				}
			}
			start = end + 2;
		}
	}


	cout << "\n-- my str --\n";
	cout << endl << my_str << endl;

	cout << "\n-- buff --\n";
	cout << endl << buff << endl;

	/// МАКСИМАЛЬНЕ СЛОВО
	/*
	int len = 0, a = 0, b, max = 0, f, d;
	for (i = 0; my_str[i]; i++) {
		if ((my_str[i] != ' ') && (my_str[i + 1])) {
			len++;
			continue;
		}
		b = i;
		if (len > max) {
			max = len;
			f = a;
			d = b + 1;
		}
		a = b;
		len = 0;
	}
	cout << "max word:";
	for (i = f; i < d; i++) {
		if (my_str[i] == ' ')continue;
		cout << my_str[i];
	}
	*/
	cout << endl;





	system("pause");
	return 0;
}