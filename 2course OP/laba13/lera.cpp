// lab13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//#include "pch.h"
#include <iostream>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<Windows.h>
using namespace std;
struct atc
{
	long int num_city, num, data, kod_city, time;
	char city[20], taruf[20];
	atc *Next;
} *Head, *El, *p, *pp;

void Input(atc *El)
{
	cout << endl;
	cout << "мiсто: "; cin.getline(El->city, 20);
	cout << "код мiста: "; cin >> El->kod_city;
	cin.ignore();
	cout << "тривалість розмови: "; cin >> El->time;
	cin.ignore();
	cout << "тариф: "; cin.getline(El->taruf, 20);
	cout << "номер мiста: "; cin >> El->num_city;
	cout << "номер користувача: "; cin >> El->num;
	cout << "дата дзвiнка: "; cin >> El->data;
	cin.ignore();
	El->Next = NULL;
}
void Add1(atc*atc)
{
	atc->Next = Head;
	Head = atc;
}
void Show()
{
	atc *temp = Head;
	cout << "мiсто: ";
	cout << "код мiста: ";
	cout << "час дзвiнка: ";
	cout << "тариф: ";
	cout << "номер мiста: ";
	cout << "номер користувача:";
	cout << "дата дзвiнка: " << endl;
	while (temp != NULL)
	{
		cout << temp->city << "\t";
		cout << temp->kod_city << "\t";
		cout << temp->time << "\t" << "\t";
		cout << temp->taruf << "\t";
		cout << temp->num_city << "\t";
		cout << temp->num << "\t";
		cout << temp->data << endl;
		temp = temp->Next;
	}
	cout << endl;
}
void Add_end(atc *Atc)
{
	atc *temp = new atc;
	if (Head == NULL) {
		Head = Atc;  exit(0);
	}
	else temp = Head;
	while (temp->Next != NULL)
	{
		temp = temp->Next;
	}
	temp->Next = Atc;
}
void del_atc()
{
	char c = 0;
	while (Head != NULL)
	{
		cout << Head->city << " -вилучено" << endl;

		atc *temp = Head->Next;
		delete Head;
		Head = temp;
		cout << "Продовжити вилучення y/n="; cin >> c;
		if (c == 'n') break;
	}
}
void del_atc_number(int n)
{
	int c = 0; atc *temp = Head;
	atc *pp = temp;

	while (temp != NULL)
	{
		c++;
		if (c == n)
		{
			pp->Next = temp->Next;
			cout << temp->city << " -вилучено" << endl; break;
		}
		else  pp = temp;
		temp = temp->Next;
	}
}
void del_atc_ph(int n)
{

	atc *temp = Head;
	atc *pp = temp;

	while (temp != NULL)
	{

		if (temp->num >= n)
		{
			if (temp == Head)
				pp->Next = temp->Next;
			cout << temp->city << " -вилучено" << endl; break;
		}
		else  pp = temp;
		temp = temp->Next;
	}
}
void del_atc_time(int n)
{

	atc *temp = Head;
	atc *pp = temp;

	while (temp != NULL)
	{

		if (temp->time >= n)
		{
			if (temp == Head)
				pp->Next = temp->Next;
			cout << temp->city << " -вилучено" << endl; break;
		}
		else  pp = temp;
		temp = temp->Next;
	}
}
void Poshuk_time()
{
	atc *temp = Head;
	atc *pp = temp;
	int min = 1000;

	while (temp != NULL)
	{
		if (temp->time < min)
		{
			min = (temp->time);

		}
		else  pp = temp;
		temp = temp->Next;

	}
	temp = Head;
	cout << "мiсто: ";
	cout << "код мiста: ";
	cout << "час дзвiнка: ";
	cout << "тариф: ";
	cout << "номер мiста: ";
	cout << "номер користувача:";
	cout << "дата дзвiнка: " << endl;
	while (temp != NULL)
	{
		if (temp->time == min) {
			cout << temp->city << "\t";
			cout << temp->kod_city << "\t";
			cout << temp->time << "\t" << "\t";
			cout << temp->taruf << "\t";
			cout << temp->num_city << "\t";
			cout << temp->num << "\t";
			cout << temp->data << endl;
		}
		temp = temp->Next;

	}
	cout << endl;

}
void Poshuk_kod()
{
	atc *temp = Head;
	atc *pp = temp;
	int min = 1000;

	while (temp != NULL)
	{
		if (temp->kod_city < min)
		{
			min = (temp->kod_city);

		}
		else  pp = temp;
		temp = temp->Next;

	}
	temp = Head;
	cout << "мiсто: ";
	cout << "код мiста: ";
	cout << "час дзвiнка: ";
	cout << "тариф: ";
	cout << "номер мiста: ";
	cout << "номер користувача:";
	cout << "дата дзвiнка: " << endl;
	while (temp != NULL)
	{
		if (temp->kod_city == min) {
			cout << temp->city << "\t";
			cout << temp->kod_city << "\t";
			cout << temp->time << "\t" << "\t";
			cout << temp->taruf << "\t";
			cout << temp->num_city << "\t";
			cout << temp->num << "\t";
			cout << temp->data << endl;
		}
		temp = temp->Next;

	}
	cout << endl;

}
void sum(atc *Head)
{
	int s = 0;
	atc *temp = Head;
	while (temp)
	{
		s += temp->time;
		temp = temp->Next;
	}
	cout << "sum=" << s << endl;
}

int M_main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	bool l;
	l = 1;
	int k;
	while (l)
	{
		cout << "1-додавання елементiв" << endl;
		cout << "2-додавання на початок" << endl;
		cout << "3-вивiд" << endl;
		cout << "4-додавання в кiнець" << endl;
		cout << "5-вилучення з вершини" << endl;
		cout << "6-вилучення за номером" << endl;
		cout << "7-вилучення за номером телефону" << endl;
		cout << "8-пошук за найменшим часом розмови" << endl;
		cout << "9-пошук за найменшим значенням коду міста" << endl;
		cout << "10-вилучення за часом розмови" << endl;
		cout << "11-вихід" << endl;
		cout << "make a choise: ";
		cin >> k;
		switch (k)
		{
		case 1:
		{
			int n;
			cout << "кiлькiсть="; cin >> n;
			cin.ignore();
			Head = NULL;
			for (int i = 0; i < n; i++)
			{
				p = new atc;
				Input(p);
			}
			break;
		}
		case 2:
		{
			p = new atc;
			Input(p);
			Add1(p);
			break;
		}
		case 3:
		{
			Show();
			break;
		}
		case 4:
		{
			p = new atc;
			Input(p);
			Add_end(p);
			break;
		}
		case 5:
		{
			del_atc();
			break;
		}
		case 6:
		{
			int m; cin >> m;
			del_atc_number(m);
			break;
		}
		case 7:
		{
			int m; cin >> m;
			del_atc_ph(m);
			break;
		}
		case 8:
		{
			Poshuk_time();
			break;
		}
		case 9:
		{
			Poshuk_kod();
			break;
		}
		case 10:
		{
			int m;
			cin >> m;
			del_atc_time(m);
			break;
		}
		case 11:
		{
			l = 0;
			exit(0);
			break;
		}
		}
	}

	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
