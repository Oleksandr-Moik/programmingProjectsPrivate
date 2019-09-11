#include <iostream>
#include <ctime>

using namespace std;

void myMain(int count);
int myCounter(int mas[], int len);
int myDobutok(int mas[], int len);

int umain() {
	setlocale(LC_ALL, "ru");
	int n;
	cout<<"Введiть кол-во тестов\n";
	cin>>n;
	if(n<=0)cout<<"Має бути принаймі один тест";
	else myMain(n);
	cout << "Кiнець тестiв\n";
	system("pause");
	return 0;
}

void myMain(int count)
{
	for (int j = 0; j < count; j++) {
		srand(time(0));
		int n, i;
		cout << "Тест " << j+1 << endl;
		cout << "Введiть розмiр одновимiрного масиву: ";
		cin >> n;
		int *arr = new int[n];

		cout << "Введiть значення в масив: ";
		for (i = 0; i < n; i++) {
			arr[i] = rand() % 51 - 25; cout << arr[i] << " ";
			//cin >> arr[i];
		}
		cout << endl;
		int kilk_ne_parnyh = myCounter(arr, n);
		cout << "Кiлькiсть непарних чисел = " << kilk_ne_parnyh << endl;

		int dobutok_dodadnyh = myDobutok(arr, n);
		cout << "Добуток чисел бiльших вiд нуля = " << dobutok_dodadnyh << endl;
		
		cout << "******************************\a\a\n\n\n";

	}
}
int myCounter(int mas[], int len) {
	int i, kilk = 0;
	for (i = 0; i < len; i++)
		if (mas[i] % 2 == 1)kilk++;
	return kilk;
}
int myDobutok(int mas[], int len) {
	int i, dob = 1;
	for (i = 0; i < len; i++)
		if(mas[i]>0) dob *= mas[i];
	return dob;
}