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

	for (i = 0, j = 0; my_str[i]; i++)
	{
		if ((my_str[i] == ' ') && (my_str[i + 1] == ' '))continue;
		buff[j] = my_str[i];
		j++;
	}
	if (buff[j - 1] == ' ')buff[j - 1] = '\0';
	else buff[j] = '\0';

	if (buff[0] == ' ')
		for (i = 0;buff[i-1]; i++)
			my_str[i] = buff[i+1];

	//// Чистка від пробілів в кінці
	//int kilk_end = 0;
	//for (i = n - 1; my_str[i] == ' '; i--) kilk_end++;
	//for (i = n - kilk_end; my_str[i]; i++) my_str[i] = '\0';

	//// Чистка від пробілів на початку
	//int kilk_begin = 0;
	//for (i = 0; my_str[i] == ' '; i++) kilk_begin++;

	//// копіюємо всі символи починаючи з першої бувки
	//for (i = kilk_begin, j = 0; my_str[i]; i++)
	//{
	//	buff[j] = my_str[i];
	//	j++;
	//}

	//n = strlen(my_str);
	//strrev(my_str);
	//strncat(buff, my_str, n - kilk_begin);
	//buff[j] = '\0';

	//for (i = 0; my_str[i]; i++) my_str[i] = '\0';
	//i = 0, j = 0;
	//strlwr(buff);
	//while (buff[i]) {
	//	if (buff[i] != ' ') {
	//		my_str[j] = buff[i];
	//		j++;
	//	}/*s a  s   ha*/
	//	else if (buff[i + 1] != ' ') {
	//		my_str[j] = buff[i];
	//		j++;
	//	}
	//	i++;
	//}

	cout << "\n-- my str --\n";
	cout << endl << my_str << endl;

	/// МАКСИМАЛЬНЕ СЛОВО
	int len = 0, a = 0, b, max = 0, f, d;
	for (i = 0; my_str[i]; i++)
	{
		if ((my_str[i] != ' ') && (my_str[i + 1]))
		{
			len++;
			continue;
		}
		b = i;
		if (len > max)
		{
			max = len;
			f = a;
			d = b + 1;
		}
		a = b;
		len = 0;
	}
	cout << "max word:";
	for (i = f; i < d; i++)
	{
		if (my_str[i] == ' ')	continue;
		cout << my_str[i];
	}
	cout << endl;

	system("pause");
	return 0;
}

