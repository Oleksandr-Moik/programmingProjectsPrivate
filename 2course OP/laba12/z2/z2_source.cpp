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

void dod_elem(int n, int m, int **mas) {
	int **dod_elements = create_2D_array(n, m);
	int **por_num = create_2D_array(n, m);
	int k;
	for (int i = 0; i < n; i++) {
		k = 1;
		for (int j = 0; j < m; j++) {
			if (*(mas[i] + j) >= 0) {
				dod_elements[i][k] = *(mas[i] + j);
				por_num[i][k] = j;
				k++;
			}
		}dod_elements[i][0] = k;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 1; j < dod_elements[i][0]; j++)
			cout << "El=" << dod_elements[i][j] << " #" << por_num[i][j] + 1 << "\t";
		if (dod_elements[i][0] == 1)cout << "NULL";
		cout << endl;
	}
	delete[]dod_elements;
	delete[]por_num;
}