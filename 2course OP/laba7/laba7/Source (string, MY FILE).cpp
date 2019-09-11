#include <iostream>
#include <cstring>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#pragma warning(disable : 4996)

using namespace std;


int main(){

	char my_str[100], buff[100];
	cin.getline(my_str, 100);

	int n = strlen(my_str);
	int i, j;

	// Чистка від пробілів
	
	// кіл-ть пробілів в кінці тексту
	int kilk_end = 0; 
	for (i = n-1; my_str[i]==' '; i--) kilk_end++;
	// чистимо кінець
	for (i = n - kilk_end; my_str[i]; i++) my_str[i] = '\0';

	// кіл-ть пробілів на початку тексту
	int kilk_start = 0; 
	for (i = 0; my_str[i] == ' '; i++) kilk_start++;

	// чистимо початок
	int k = 0; // для додаткової індексації допоміжного масиву
	for (i = kilk_start; my_str[i]; i++)
	{	// копіюємо всі символи починаючи з першої бувки
		buff[k] = my_str[i];
		k++;
	}

	// МАКСИМАЛЬНЕ СЛОВО
	/*
	my_str[n] = ' ';my_str[++n] = '\0';
	int max = 0, apos = 0, bpos;
	for (i = 0;my_str[i]!=' '; i++){max++;bpos = i+1;}
	// cout << "length first word = " << max << "\nend letter word on " << bpos++ << endl;
	for (i = bpos; my_str[i]; i++){
		if (my_str[i] == ' ') {
			apos = bpos;
			if (max < bpos - apos)
				max = bpos - apos;
			bpos = i;
		}
	}
	cout << "max word is: \n";
	for (i = apos; i <= bpos; i++)cout << my_str[i];
	//************************/

	// ПАЛІНДРОМИ 
	/*
	вибирати слово до пробіла і пробігати до
	середини перевіряючи пропорційно відповідність
	символів від початку і від кінця
	(перший з останнім), (другий з передоостаннім тощо

	якщо слово паліндром то в новий масив рядку
	скопіювати всі символи до нього та
	після нього
	*/

	cout << "\n my str \n";
	cout << endl << my_str << "." << endl;

	cout << "\n buff \n";
	cout << endl << buff << "." << endl;

	cout << endl;
	system("pause");
	return 0;
}

