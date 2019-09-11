#include <iostream>
#include <Windows.h>

using namespace std;

struct Function {
	char name[15];
	int quantity;
	int parametres[50];
	Function *next;
}*head, *p;

void add_bn(Function *t) {
	Function *temp = new Function;
	temp = t;
	temp->next = head;
	head = temp;
}

void input(Function *El) {
	Function *temp = new Function;
	cin.get();cout << endl;
	cout << "Назва ф-ї: "; cin.getline(El->name, 15);
	cout << "К-ть параметрів: "; cin >> El->quantity;
	cout << "Параметри (по 2 байти):\n"; 
	for (int i = 0; i < El->quantity; i++){
		cout << "параметр "<<i + 1 <<" = ";
		cin >> El->parametres[i];
	}
	El->next = NULL;
}

int Size_Func() {
	int s=0;
	Function *temp = head;
	if (temp == NULL)
		cout << "Стек порожній\n";
	else {
		while (temp != NULL) {
			s += temp->quantity * 2;
			temp = temp->next;
		}
		cout << endl;
	}
	return s;
}

void Show() {
	Function *temp = head;
	if (temp==NULL)
		cout << "Стек порожній\n";
	else {
		cout << "Введені дані" << endl;
		cout << "Назва\t" << "К-ть\t" << "Параметри\n";
		while (temp != NULL) {
			cout << temp->name << '\t';
			cout << temp->quantity << '\t';
			for (int i = 0; i < temp->quantity; i++)
			{
				cout << temp->parametres[i] << " ";
			}
			cout << '\n';
			temp = temp->next;
		}
		cout << endl;
	}
}

void del() {
	if (head == NULL) {
		cout << "Стек порожній\n";
		return;
	}
	Function *temp = head->next;
	cout << "Видалено ф-ю" << head->name << '\n';
	delete head;
	head = temp;
}

int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	head = NULL;
	int a, n, b = 0;
	bool l = 1;
	while (l) {
		cout << "Що виконати:\n"
			<< "1-Створити стек\n"
			<< "2-Додати нову ф-ю\n"
			<< "3-Видалити ф-ю\n"
			<< "4-Вивести вміст\n"
			<< "5-Звільнити пам'ять\n"
			<< "6-Розмір пам'яті, зайнятого стеком\n"
			<< "7-К-ть ф-ї у стеку\n"
			<< "8-Вихід" << endl;
		cin >> n;
		switch (n) {
		case 1: {
			cout << "Введіть к-ть ф-й для введення: ";
			cin >> a;
			cout << "Введіть дані: ";
			for (int i = 0; i < a; i++) {
				p = new Function;
				input(p);
				add_bn(p);
				b++;
			} break;
		}
		case 2: {
			p = new Function;
			input(p);
			add_bn(p);
			b++;
			break;
		}
		case 3: {
			del(); b--;
			break;
		}
		case 4: {
			Show();
			if (b == 6) cout << "Можливе переповнення\n";
			else if (b == 7) cout << "Стек переповнено\n";
			break;
		}
		case 5: {
			if (head == NULL)cout << "Стек порожній\n";
			else while(head!=NULL)del(); 
			break; }
		case 6: {
			int s=Size_Func();
			cout << "Розмір пам'яті: " << s << " байт\n";
			break;
		}
		case 7: {
			cout << "Ф-й в стеку " << b <<"\n";
			break;
		}
		case 8: {l = 0; exit(0); break; }
		}
		system("pause");
	}
	return 0;
}
