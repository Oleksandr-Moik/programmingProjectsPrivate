#include <iostream>
#include <math.h>
#include <conio.h>
#define M_PI       3.14159265358979323846

using namespace std;

/*//////////////////////

int main(){
	double a, b, h, s, r;
	int n = 1;
	cout << "a, b, h, r" << endl;
	cin >> a >> b >> h >> r;
	while (n<=4)	{
		switch (n){
			case 1: s=a*b; break;
			case 2: s=a/2*h; break;
			case 3: s=(a+b)/2+h; break;
			case 4: s=M_PI*r*r; break;
		}
		cout << n << " " << s <<endl;
		n++;
	}
	_getch();
	return 0;
}

*////////////////