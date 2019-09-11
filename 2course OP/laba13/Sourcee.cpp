/*
У довідковій аеропорту зберігається розклад
вильоту літаків на наступну добу.

Для кожного рейсу вказані :
-номер рейсу,
-тип літака,
-пункт призначення,
-час вильоту.

Вивести всі
-номери рейсів,
-типи літаків і
-часи вильоту
для заданого пункту призначення
у порядку зростання часу вильоту.
*/

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
#include <conio.h>
#include <ctime>

using namespace std;

struct airport {
	unsigned long int number;
	char type_plain[5], city[30];
	unsigned short int day, hour, min;
	airport *Next;
}
*Head, *p;

void Enter_new_data(airport *new_elem);

void Add_first(airport *new_elem);
void Add_end(airport *new_elem);
void Add_by_poz(airport*new_elem, int poz);

void Delete_items_head();
void Delete_items_end();
void Delete_item_by_rank(int n);
void Delete_item_by_number(int n);

void Print_all_items();
void Print_by_city(char chek[30]);

void main_menu(bool &test);
void switchez(int num, bool &l);

int test_time(int t);
// Головна ф-я
int M_main() {
	srand(time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Head = NULL;
	bool l = 1;

	while (l) {
		main_menu(l);
		cout << "Для продовження натисніть будь яку клавішу...";
		_getch();
	}
	return 0;
}/// main()

void main_menu(bool &test) {
	system("cls");
	cout << "\t***АЕРОПОРТ***\n"
		<< "Додавання: \n"
		<< "1 -кількох елементів\n"
		<< "2 -елементу на початок\n"
		<< "3 -елементу в кінець\n"
		<< "4 -в список за номером\n"
		<< "Вивiд:\n"
		<< "5 -всіх елементiв списку\n"
		<< "6 -за критерієм\n"
		<< "Вилучення:\n"
		<< "7 -елементів з вершини\n"
		<< "8 -елементів з кінця\n"
		<< "9 -за умовою (номер рейсу)\n"
		<< "10-за номером\n"
		<< "13-Вихiд\n"
		<< "Виберiть режим роботи: ";
	int k;
	cin >> k; cin.ignore();
	switchez(k, test);
}
void switchez(int num, bool &l) {
	switch (num) {
	case 1: { // додавання n елементів 
		cout << "Введіть кількість рейсів для додавання ";
		int N; cin >> N; cin.ignore();
		for (int i = 0; i < N; i++) {
			p = new airport;
			cout << "\nРейс: " << i + 1 << endl;
			Enter_new_data(p);
			Add_first(p);
		}
		break; }
	case 2: { // додавання елементу на початок
		p = new airport;
		Enter_new_data(p);
		Add_first(p);
		break; }
	case 3: { // додавання елементу в кінець
		p = new airport;
		Enter_new_data(p);
		Add_end(p);
		break; }
	case 4: { // додавання елементів за пор номером
		cout << "Яким вставити? - ";
		int k; cin >> k; cin.ignore();
		p = new airport;
		Enter_new_data(p);
		Add_by_poz(p, k);
		break; }
			// Вивід всіх та за містом прибуття
	case 5: { Print_all_items(); break; }
	case 6: { cout << "Введіть місто: ";
		char city[30]; cin.getline(city, 30);
		Print_by_city(city); break; }
			// видалення з початку та з кінця
	case 7: { Delete_items_head(); break; }
	case 8: { Delete_items_end(); break; }
	case 9: { // видалення за номером рейсу
		cout << "Введіть номер рейсу для вилучення: ";
		int num; cin >> num;
		Delete_item_by_number(num);
		break; }
	case 10: { // видалення за пор номером
		cout << "Введіть номер: ";
		int m;  cin >> m;
		Delete_item_by_rank(m);
		break;
	}
	case 13: {l = 0; break; } // кінець роботи
	default: {
		cout << "Введіть ще раз...\n";
	}/// default
	}/// switch
}
/*додавання даних в новий елемент*/
void Enter_new_data(airport *new_elem){
	int race_num = 0;

	// випадковий 6-ти значний номер
	int k_r = 6;
	for (int i = 0; i < k_r; i++)
		race_num += rand() % 10 * pow(10, i);
	//race_num = 99999;
	if (race_num < pow(10, k_r-1))
		race_num = race_num + (rand() % 9 + 1) * pow(10, k_r-1);
	new_elem->number = race_num;

	cout << "Тип літаку:  ";
	//cin.getline(new_elem->type_plain, 5);
	char m1, m2[] = "b7x7";
	for (int i = 0; i < 5; i++) {
		*(new_elem->type_plain + i) = m2[i];
		if (i == 2)
		{
			m1 = (rand() % 4 + 52);
			*(new_elem->type_plain + i) = m1;
		}
	}
	cout << new_elem->type_plain << endl;
	cout << "Місто прибуття: "; cin.getline(new_elem->city, 30);

	cout << "Дата вильоту (день, година, хвилина): ";
	//cin >> new_elem->day >> new_elem->hour >> new_elem->min; cin.ignore();
	new_elem->day = test_time(1);
	new_elem->hour = test_time(2);
	new_elem->min = test_time(2);
	cout << new_elem->day << " " << new_elem->hour << " " << new_elem->min << endl;

	new_elem->Next = NULL;
}

/*Додавання на початок*/
void Add_first(airport *new_elem)
{
	airport *temp = new airport;
	temp = new_elem;
	temp->Next = Head;
	Head = temp;
}

/*Додавання в кiнець*/
void Add_end(airport *new_elem)
{
	airport *temp = new airport;
	if (Head == NULL)
	{
		Head = new_elem;
		exit(0);
	}
	else
		temp = Head;

	while (temp->Next != NULL)
		temp = temp->Next;
	temp->Next = new_elem;
}

/*долдовання за номером*/
void Add_by_poz(airport*new_elem, int poz) {
	airport *temp = Head;
	if (temp == NULL)
	{
		temp = new_elem;
		temp->Next = Head;
		Head = temp;
		cout << "Додано першим" << endl;
	}
	else
	{
		int c = 0;
		bool is = 0;
		airport *pp = temp;
		while (temp != NULL) {
			c++;
			if (c == poz) {
				pp->Next = new_elem;
				new_elem->Next = temp;
				is = 1;
				//cout << "Додано між " << pp->city << " " << pp->number << " & " << temp->city << " " << temp->number << endl;
			}
			else {
				pp = temp;
				temp = temp->Next;
			}
		}
		if (is)
		{
			cout << "Виконано.\n";
		}
		else
		{
			cout << "Неможливо вставити. Список менший за номер.\n";
			cout << "Вставити останнім y/n - ";
			char n; cin >> n;
			if (n == 'y')
			{
				Add_end(new_elem);
				cout << "Додоно в кінець\n";
			}
		}
	}
}


/* ВИДАЛЕННЯ */
/*видалення елементів починаючи з голови (початку)*/
void Delete_items_head()
{
	char c = 0;
	if (Head == NULL)
		cout << "Список порожній\n";
	else {
		while (Head != NULL)
		{
			cout << Head->number << " " << Head->city << " - вилучено" << endl;

			airport *temp = Head->Next;
			delete Head;
			Head = temp;
			cout << "Продовжити вилучення y/n: "; cin >> c;
			if (c == 'n') break;
		}
	}
}
/*видалення елементів починаючи з кінця*/
void Delete_items_end() {
	char c = 0;
	if (Head == NULL)
		cout << "Список порожній\n";
	else {
		airport *temp = new airport;
		airport *pp = new airport;
		temp = Head;
		pp = temp;
		while (temp != NULL)
		{
			if (temp->Next == NULL)
			{
				cout << temp->number <<" " << temp->city << " - вилучено" << endl;
				delete temp;
				pp->Next = NULL;
				temp = Head;
				cout << "Продовжити вилучення y/n: "; cin >> c;
				if (c == 'n') break;
			}
			else {
				pp = temp;
				temp = temp->Next;
			}
		}
	}
}
/*видалення за порядком*/
void Delete_item_by_rank(int n)
{
	int c = 0;
	bool is = 0;
	airport *temp = Head;
	airport *pp = temp;

	if (temp == NULL)
		cout << "Список порожній\n";
	else {
		while (temp != NULL)
		{
			c++;
			if (c == n) {
				pp->Next = temp->Next;
				cout << temp->number <<" "<< temp->city << " - вилучено" << endl;
				is = 1;
				break;
			}
			else
				pp = temp;
			temp = temp->Next;
		}
		if (is) cout << "Виконано.\n";
		else cout << "Відповідного номеру елементу немає.\n";
	}
}
/*видалення за умовою*/
void Delete_item_by_number(int n)
{
	bool is = 0;
	airport *temp = Head;
	airport *pp = temp;
	if (temp == NULL)
		cout << "Список порожній\n";
	else {
		while (temp != NULL)
		{
			if (temp->number == n)
			{
				pp->Next = temp->Next;
				cout << temp->city << " " << temp->day << " числа "<< " - вилучено" << endl;
				is = 1;
				//break;
			}
			else
				pp = temp;
			temp = temp->Next;
		}
		if (is) cout << "Виконано.\n";
		else cout << "Відповідного номеру елементу немає.\n";
	}
}
/* ВИВІД */
/*вивести всі елементи*/
void Print_all_items() {
	airport *temp = Head;
	if (temp == NULL)
		cout << "Список порожній\n";
	else {
		cout << "# рейсу  "
			<< "Тип літаку  "
			<< "Місто прибуття      "
			<< "Дата вильоту\n";
		while (temp != NULL)
		{
			cout << temp->number << "\t\t";
			cout << temp->type_plain << "\t";
			cout << temp->city << "\t\t";
			cout << temp->day << "-го о " << temp->hour << ":" << temp->min / 10 << temp->min % 10 << endl;

			temp = temp->Next;
		}
		cout << endl;
	}
}

/*вивід за містом*/
void Print_by_city(char chek[30]) {
	airport *temp = Head;
	if (temp == NULL)
		cout << "Список порожній\n";
	else {
		cout << "# рейсу  "
			<< "Тип літаку  "
			<< "Місто прибуття      "
			<< "Дата вильоту\n";
		while (temp != NULL)
		{
			if (!strcmp(temp->city, chek))
			{
				cout << temp->number << "\t\t";
				cout << temp->type_plain << "\t";
				cout << temp->city << "\t\t";
				cout << temp->day << "-го о " << temp->hour << ":" << temp->min / 10 << temp->min % 10 << endl;
			}
			temp = temp->Next;
		}
		cout << endl;
	}
}



/* Тестовий набір */
int test_time(int t) {
	int rez, k1, k2;
	k1 = (t == 1) ? 32 : 24;
	k2 = (t == 1) ? 1 : 0;
	rez = rand() % k1 + k2;
	return rez;
}
/*
1
9
Kijv
Moscva
New York
Vashington
Rome
Praga
Lviv
Mexico
OAE

Kijv
Moscva
New York
Vashington
Rome
Praga
Lviv
Mexico
OAE
*/