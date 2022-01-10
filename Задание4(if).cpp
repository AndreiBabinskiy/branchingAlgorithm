#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUSSIAN");

	double z;
	double k;
	double x;
	double y;
	
	cout << "¬ведите z : " << endl;
	cin >> z;

	cout << "¬ведите k : " << endl;
	cin >> k;

	if (k < 1) {
		x = k * pow(z, 3);
	}

	else {
		x = z * (z + 1);
	}

	y = (log(1 + pow(x, 2)) + cos(x + 1)) * exp(k * x);

	cout << "y = " << y << endl;
	system("pause");
}







