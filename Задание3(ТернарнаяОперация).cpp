#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUSSIAN");

	double x;
	double y;

	cout << "Введите первое вещественно число x: " << endl;
	cin >> x;

	cout << "Введите второе вещественно число y: " << endl;
	cin >> y;
	
	x <= -2 && y >= 1 ? cout << "Плюс" << endl : cout << "Минус" << endl;

	system("pause");
}