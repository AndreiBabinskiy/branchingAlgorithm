#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUSSIAN");

	int year;

	cout << "Введите год : " << endl;
	cin >> year;

	if (year < 2021) {
		cout << "Прошлый год" << endl;
	}
	else if (year > 2021) {
		cout << "Будущий год" << endl;
	}

	else if (year == 2021) {
		cout << "Текущий год" << endl;
	}

	if (year % 2 == 0) {
		cout << "Четное число" << endl;
	}
	else {
		cout << "Нечетное число" << endl;
	}

	if (year % 400 == 0) {
		cout << "Високосный" << endl;
	}
	else {
		cout << "Не високосный" << endl;
	}
	system("pause");
}







