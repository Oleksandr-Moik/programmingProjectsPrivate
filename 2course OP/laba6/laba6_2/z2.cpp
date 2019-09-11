#include <iostream>
#include <ctime>
using namespace std;
int main() {
	srand(time(NULL));
	int y[5][4], k=0;
	for (int i = 0; i < 5; i++)	{
		for (int j = 0; j < 4; j++) {
			y[i][j] = rand() % 8;
			cout << y[i][j] << "\t";
		}cout << endl;
	}cout << endl;
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 4; j++)
			if (y[i][j]>=8){cout<<y[i][j]<<" ";k++;}
	if (k==0)cout << "\nЗначень >8 немає";
	cout << endl;
	system("pause");
	return 0;
}