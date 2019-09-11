///*7.	Створити однозв’язний лінійний список з довільних цілих чисел. 
//Додатні числа записати у стек не змінюючи їх послідовність. Аналогічно, від’ємні числа записати у чергу. 
//Прочитати список,  чергу і стек на екран.
// ПРИСТУПА
#include <iostream>
using namespace std;
struct Chisla
{
	int a;
	Chisla*next;
}*golova_spisku, *xvist_spisku, *golova_steku, *golova_chergi, *xvist_chergi;

void zapovnenna_spisku(int chislo)
{
	Chisla*temp = new Chisla;
	temp->a = chislo;
	temp->next = NULL;
	if (golova_spisku == NULL)
	{
		golova_spisku = temp;
		xvist_spisku = temp;
	}
	else
	{
		xvist_spisku->next = temp;
		xvist_spisku = temp;
	}
}

void Vivod(Chisla* h) {
	Chisla* temp = h;
	while (temp != NULL) {
		cout << temp->a << ' ';
		temp = temp->next;
	}
	cout << endl;
}

void stek_cherga()
{
	Chisla* temp, *temp2;
	temp = golova_spisku;
	while (temp != NULL) {
		if (temp->a > 0) {
			temp2 = new Chisla;
			temp2->a = temp->a;
			temp2->next = golova_steku;
			golova_steku = temp2;
		}
		if (temp->a < 0) {
			temp2 = new Chisla;
			temp2->a = temp->a;
			temp2->next = NULL;
			if (golova_chergi == NULL) {
				golova_chergi = temp2;
				xvist_chergi = temp2;
			}
			else {
				xvist_chergi->next = temp2;
				xvist_chergi = temp2;
			}
		}
		temp = temp->next;
	}
}
int main()
{
	int n;
	cout << "Vvedit kilkist chisel:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int chislo;
		cout << "Vvedit chislo:";
		cin >> chislo;
		zapovnenna_spisku(chislo);
	}
	cout << "Zapovneniy spisok:" << endl;
	Vivod(golova_spisku);
	stek_cherga();
	cout << "Zapovneniy stek:" << endl;
	Vivod(golova_steku);
	cout << "Zapovnea cherga:" << endl;
	Vivod(golova_spisku);
	system("pause");
	return 0;
}

/*-Мій код-*/
//#include <iostream>
//#include <Windows.h>
//
//struct PC{
//	
//	PC*next;
//}*head,*p,*end,*temp;
//
//void add(PC *el);
//void input(PC *el);
//void show();
//using namespace std;
//
//int main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	head = NULL;
//
//	int a;
//	bool s = 1;
//	while (s) {
//		cout << "Виберіть режим роботи:\n";
//		cout << "1 - Додати" << endl
//		
//			<< "3 - Вивід" << endl
//			<< "6 - Очистити екран" << endl
//			<< "7 - Вихід" << endl;
//		cout << "Ваш вибір: "; cin >> a;
//		switch (a)
//		{
//		case 1: {
//			p = new PC;
//			add(p);
//			input(p);
//			break;
//		}
//		case 3: {
//			show();
//			break;
//		}
//		case 6: {
//			system("cls");
//			break;
//		}
//		case 7: {
//			s = 0;
//			break;
//		}
//		default:
//			cout << "Невірний режим роботи!\n";
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
///*
//void add(PC *el) {
//	PC *temp = new PC;
//	temp = el;
//	temp->next = Head;
//	Head = temp;
//}*/
///*
//void input(PC *el) {
//	cin.ignore();
//	cout << "Введіть модель: ";
//	cin.getline(el->model, 10);
//	cout << "Введіть dpi: ";
//	cin >> el->dpi;
//	cout << "Succes.."<<endl;
//}*/
///*
//void show() {
//	PC *temp = new PC;
//	temp = Head;
//	if (Head != NULL) {
//		cout << "Model\tdpi\n";
//		while (temp != NULL) {
//			cout << temp->model << "\t" << temp->dpi << endl;
//			temp = temp->next;
//		}
//		cout << "Succes.."<<endl;
//	}
//	else {
//		cout << "Список порожній\n";
//	}
//}*/
