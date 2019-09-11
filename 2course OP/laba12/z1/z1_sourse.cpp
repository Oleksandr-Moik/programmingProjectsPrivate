#include<math.h>
#include<iostream>
#include<conio.h>
#include<ctime>

using namespace std;

int **create_2D_array(int n, int m);
void filling(int n, int m, int **mas);
void vuvid_with_adres(int n, int m, int **mas);
void dod_elem(int n, int m, int **mas);

int main(){
	srand(time(NULL));
	int n, m;

	cout << "rozmir masiva (N na M): ";
	cin >> n >> m;

	int **mas = create_2D_array(n, m);

	filling(n, m, mas);
	vuvid_with_adres(n, m, mas);
	dod_elem(n, m, mas);

	delete[]mas;

	system("pause");
	return 0;
}

void dod_elem(int n, int m, int **mas) {
	int **dod_elements = create_2D_array(n, m);
	int **data = create_2D_array(n, 2);

	int k, sum;
	for (int i = 0; i < n; i++) {
		k = 0;sum = 0;
		for (int j = 0; j < m; j++) {
			if (mas[i][j] >= 0) {
				dod_elements[i][k] = mas[i][j];
				sum += mas[i][j];
				k++;
			}
		}
		data[i][0] = k;
		data[i][1] = sum;
	}

	for (int i = 0; i < n; i++) {
		if (data[i][0] == 0) {
			cout << "NULL\n";
			continue;
		}
		cout << "k=" << data[i][0] << "  sum=" << data[i][1] << "\t";
		for (int j = 0; j < data[i][0]; j++) 
			cout << "" << dod_elements[i][j] << "\t";
		cout << endl;
	}

	delete[]dod_elements;
	delete[]data;
}

int **create_2D_array(int n, int m) {
	int**arr = new int*[n];
	for (int i = 0; i < n; i++)
		arr[i] = new int[m];
	return arr;
}

void filling(int n, int m, int **mas){
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			mas[i][j] = rand() % 21 - 10;
}

void vuvid_with_adres(int n, int m, int **mas) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << (mas[i] + j) << "  " << *(mas[i] + j) << "\n";
		cout << endl;
	}
}
