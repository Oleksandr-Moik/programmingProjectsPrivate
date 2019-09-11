#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;

int main() {
	srand(time(NULL));
	setlocale(LC_ALL,"Ru");

	int mas[20], max,d=1,kilk=0,sum=0,kk=0;
	double sr;
	cout << "\t\t***Одновимiрний масив***\n\n";
	for (int i = 0; i < 20; i++){
		mas[i] = rand()%31 - 15;
		cout	<< mas[i] << "\t|\t";
		if ((i+1)%5==0) cout << endl;
		sum+=mas[ i ];
	}
	sr = sum / 20. ;
	for (int i = 0; i < 20; i++) {
		if (mas[i] > 0)	d*= mas[ i ];
		if (mas[i] >= sr) kilk++;
	}

	max = mas[1];
	for (int i = 1; i < 20; i += 2)
		if (max < mas[ i ]) max = mas[ i ];
		
	cout << "\nДобуток = " << d
			<< "\nКiлькiсть = " << kilk
			<< "\nMax = " << max << endl;

	_getch();
	return 0;
}