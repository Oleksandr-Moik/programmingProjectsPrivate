#include <iostream>
#include <cstring>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <Windows.h>

#pragma warning(disable : 4996)

using namespace std;

int mainm() {
	char my_str[1000], buff[1000];
	cin.getline(my_str, 1000);

	int n = strlen(my_str);
	int i, j = 0;

	bool close = true;
	for (i = 0; i < n; i++)
	{
		if ((my_str[i] != '(') && close)
		{
			buff[j] = my_str[i];
			j++;
		}
		else close = false;
		if (my_str[i] == ')')close = true;
	}
	buff[j] = '\0';
	for (i = 0; my_str[i]; i++)my_str[i] = '\0';
	n = strlen(buff);
	j = 0;
	for (i = 0; i < n; i++)
	{
		if ((buff[i] == ' ') && (buff[i + 1] == ' '))continue;
		my_str[j] = buff[i];
		j++;
	}

	cout << "\n-- my str --\n";
	cout << endl << my_str << "." << endl;


	int kilk = 0, len = 0;
	for (i = 0; my_str[i]; i++)
	{
		if ((my_str[i] != ' ')&&(my_str[i+2]))
		{
			len++;
			continue;
		}
		if (len % 2 == 1)
		{
			kilk++;
		}
		len = 0;
	}
	cout << "kilk = "<<kilk<<endl;
	
	int count[255] = { 0 };
	for (i = 0; my_str[i]; i++)
	{
		count[(int)my_str[i]]++;
	}
	for (i = 65; i < 245; i++)
	{
		if (count[i]<1)
		{
			continue;
		}
		cout << (char)i << " = " << count[i] << endl;
	}

	system("pause");
	return 0;
}

