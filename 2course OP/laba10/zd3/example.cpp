#include "pch.h"
#include <iostream>
#include <fstream>
#include <conio.h>
#include <string.h>
#include <stdio.h>

using namespace std;

//описуємо структуру "книга"
struct  book
{
	int shifr;
	char autor[15], nazv[30];
	float cena;
};
void mmain()
{
	//описуємо змінну для роботи із структурою
	book bk;
	//описуємо допоміжні змінні
	int i, n, k, b, kol;
	float maxcena;
	char autor[15];
	setlocale(LC_ALL, "rus");
	//обнуляємо ознаку завершення програми
	b = 0;
	//поки b=0 повторюватимемо цикл видачі меню
	while (b == 0)
	{
		//очищаємо екран

		//видаємо меню програми
		cout << "1 - створення файлов\n";
		cout << "2 - додавання у файл\n";
		cout << "3 - книги з максимальною ценой\n";
		cout << "4 - книги вказаного автора\n";
		cout << "5 - читання  файлу\n";
		cout << "6 - выход\n";
		//запрошуємо вибір користувача з меню
		cout << "Сделайте вибiр:"; cin >> k;

		//обробляємо вибраний пункт меню
		switch (k)
		{

			//якщо вибраний перший пункт меню
		case 1:
		{
			//описуємо змінну для читання з файлу
			ofstream file1;
			//пов'язуємо змінну з файлом на диску і створюємо файл
			file1.open("biblio.dat", ios::binary);
			//вводимо кількість книг
			cout << "Введите кількість книг: ";
			cin >> n;
			//організовуємо цикл для введення даних
			for (i = 0; i <= n - 1; i++)
			{ //вводимо дані про i книгу
				cout << i + 1 << "-я книга:\n";
				cout << "-шифр: "; cin >> bk.shifr; cin.get();
				cout << "-автор: "; cin.getline(bk.autor, 15);
				cout << "-название: "; cin.getline(bk.nazv, 30);
				cout << "-цена: "; cin >> bk.cena; cin.get();
				//записуємо i книгу у файл
				file1.write((char*)&bk, sizeof bk);
			}
			//закриваємо файл
			file1.close();
			file1.clear();
			break;
		}

		//якщо вибраний другий пункт меню
		case 2:
		{
			//змінна file1 для додавання у файл 
			ofstream file1;
			//змінна file1 зв'язується з файлом biblio.dat в режимі додавання
			file1.open("biblio.dat", ios::app);
			//вводимо кількість книг для додавання
			cout << "Введите кількість книг: ";
			cin >> n;
			//в циклі вводимо дані про i книгу
			for (i = 0; i <= n - 1; i++)
			{
				cout << i + 1 << "-я книга:\n";
				cout << "-шифр: "; cin >> bk.shifr; cin.get();
				cout << "-автор: "; cin.getline(bk.autor, 15);
				cout << "-название: "; cin.getline(bk.nazv, 30);
				cout << "-цена: "; cin >> bk.cena; cin.get();
				//записуємо дані про i книгу в file1
				file1.write((char*)&bk, sizeof bk);
			}
			//закриваємо файл
			file1.close();
			file1.clear();
			break;
		}

		//якщо вибраний третій пункт меню
		case 3:
		{
			//припускаємо, що максимальна ціна рівна 0
			maxcena = 0;
			//описуємо змінну для читання з файлу
			ifstream file1;
			//зв'язуємо змінну file1 з файлом biblio.dat
			file1.open("biblio.dat", ios::out);
			//в циклі читаємо дані з фала file1
			//и знаходимо максимальну ціну
			while (file1.read((char*)&bk, sizeof bk))
				if (bk.cena > maxcena)
					maxcena = bk.cena;
			//виводимо максимальну ціну на екран
			cout << "Максимальная цена=" << maxcena << "\n";
			cout << "Список книг з максимальною ціною:\n";
			//розблокуємо файл file1
			file1.clear();
			//переходь на початок файлу
			file1.seekg(0);
			//в циклі читаємо дані з фала file1
			while (file1.read((char*)&bk, sizeof bk))
				//якщо ціна рівна максимальному значенню
				if (bk.cena == maxcena)
					//виводимо на екран назву цієї книги
					cout << bk.nazv << "\n";
			//закриваємо файл file1
			file1.close();
			file1.clear();
			//робимо паузу для перегляду 
			cout << "Для продовження натискуйте будь-яку клавішу...";

			break;
		}

		//якщо вибраний четвертий пункт меню
		case 4:
		{
			cin.get();
			//вводимо автора для пошуку
			cout << "Введите автора для пошуку: "; cin.getline(autor, 15);
			cout << autor << "\n";
			//описуємо змінну для читання з файлу
			ifstream file1;
			//пов'язуємо змінну з файлом biblio.dat
			file1.open("biblio.dat");
			//припускаємо, що кількість рівно 0
			kol = 0;
			//в циклі читаємо дані з файлу
			while (file1.read((char*)&bk, sizeof bk))
				//якщо автор книги рівний введеному автору
				if (strncmp(bk.autor, autor, strlen(autor)) == 0)
					//кількість збільшується на 1
					kol++;
			//виводимо кількість книг на екран
			cout << "Количество книг вказаного автора рівно " << kol << "\n";
			//закриваємо файл file1
			file1.close();
			//робимо паузу для перегляду
			cout << "Для продовження натискуйте будь-яку клавішу...";

			break;
		}
		case 5:
		{
			//описуємо змінну для читання з файлу
			ifstream file1;
			//пов'язуємо змінну з файлом biblio.dat
			file1.open("biblio.dat");

			//якщо вибраний п'ятий пункт менюcout << "Список книг \n";
				//розблокуємо файл file1
			file1.clear();
			//переходимо на початок файлу
			file1.seekg(0);
			//в циклі читаємо дані з фала file1
			cout << "шифр" << "\t" << "назва" << "\t" << "автор" << "\t" << "цiна" << "\n";
			while (file1.read((char*)&bk, sizeof bk))
			{
				//виводимо на екран  книги
				cout << bk.shifr << "\t" << bk.nazv << "\t" << bk.autor << "\t" << bk.cena << "\n";
			}
			//закриваємо файл file1
			file1.close();
			file1.clear(); break;
		}
		//робимо паузу для перегляду 
		case 6:
		{
			//ознака виходу з циклу програми рівна 1
			b = 1;
			break;
		}
		} //кінець switch
	} system("Pause");
	return;

}
