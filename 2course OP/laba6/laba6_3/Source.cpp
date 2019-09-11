#include <iostream>
#include <ctime>
using namespace std;
int main() {
	srand(time(NULL));
	setlocale(LC_ALL,"ru");
	int k,x[20];
	cout << "Введiть 20 значень в масив:\n";
	for (int i = 0; i < 20; i++) x[i]=rand()%21-10;//cin >> x[i];
	for (int i = 0; i < 20; i++) cout << x[i] << "| ";
	cout << "\nВведiть варiант роботи програми (1 або 2):\n";
	cin >> k;
	int sum=0, kilk=0, max; double d=1;
	switch (k){
	case 1:
		for (int i = 0; i < 20; i++)
			if (x[i]<0){
				sum+=x[i];
				d*=x[i];
				kilk++;
			}
		if (kilk==0)cout<<"Вiд'ємних немає\n";
		else cout << "Сума = " << sum << endl
			<< "Добуток = " << d << endl;
		break;
	case 2:
		for (int i = 0; i < 20; i++)
			if (x[i]%2==0){
				max=x[i];
				kilk++;
			}
		if (kilk==0)cout<< "\nMAX парного немає\n";
		else {
		for (int i = 0; i < 20; i++)
				if ((max<x[i])&&(x[i]%2==0))
					max=x[i];
			cout << "\nMAX = " << max << endl;
		}break;
	default:
		cout << "\nНевiрний режим роботи!!!\n";break;
	}
	system("pause");
	return 0;
}