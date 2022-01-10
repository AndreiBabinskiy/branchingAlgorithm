#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUSSIAN");

	double x;
	double y;
	double z;
	double m;
	double max;
	double min;

	m1:
	cout << "¬ведите x : " << endl;
	cin >> x;

	cout << "¬ведите y : " << endl;
	cin >> y;

	cout << "¬ведите z : " << endl;
	cin >> z;

	if (x > y && x > z) {
		max = x;
	}
	
	else if (y > x && y > z) {
		max = y;
	}
	else if (z > x && z > y) {
		max = z;
	}
	if (x < y) {
		min = x;
	}
	else if (y < x) {
		min = y;
	}

	m = max / min + 5;

	if (x == 0 || y == 0) {
		cout << "ƒеление на ноль невозможно" << endl;
		goto m1;
	}
	else {
		cout << "m = " << m << endl;
	}
}