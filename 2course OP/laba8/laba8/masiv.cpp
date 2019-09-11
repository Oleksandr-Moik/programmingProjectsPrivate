#include <iostream>
#include <ctime>
using namespace std;
void myMain(int count_start);		
int myCounter(int mas[], int len);	
int myDobutok(int mas[], int len);
void main() {
	setlocale(LC_ALL, "rus");
	myMain(1);
	system("pause");
}
void myMain(int count_start) {
	if (count_start <= 5) {
		setlocale(LC_ALL, "rus");
		srand(time(0));
		int n, i, arr[20];
		cout << "test " << count_start << endl;
		cout << "Vvedit rozmir masivu: ";
		cin >> n;
		cout << "Vvedit znachenia v masiv: ";
		for (i = 0; i < n; i++)	cin >> arr[i];
		cout << endl;
		int kilk_ne_parnyh = myCounter(arr, n);
		cout << "Nparnyh chisel = " << kilk_ne_parnyh << endl;
		int dobutok_dodadnyh = myDobutok(arr, n);
		cout << "Dobytok = " << dobutok_dodadnyh << endl;
		cout << "******************************\a\a\n\n\n";
		count_start++;
		myMain(count_start);
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
		if (mas[i] > 0) dob *= mas[i];
	return dob;
}