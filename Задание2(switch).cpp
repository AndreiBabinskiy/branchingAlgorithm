#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUSSIAN");

	int year;

	cout << "Введите год животного : " << endl;
	cin >> year;

	switch (year % 12) { // год делиться без остатка = 0, первое животное, =1 второе
		case 0: {
			cout << "Год обезьяны" << endl;
			break;
		}
		case 1: {
			cout << "Год Петуха" << endl;
			break;
		}
		case 2: {
			cout << "Год собаки" << endl;
			break;
		}
		case 3: {
			cout << "Год кабана" << endl;
			break;
		}
		case 4: {
			cout << "Год крысы" << endl;
			break;
		}
		case 5: {
			cout << "Год вола" << endl;
			break;
		}
		case 6: {
			cout << "Год тигра" << endl;
			break;
		}
		case 7: {
			cout << "Год кролика" << endl;
			break;
		}
		case 8: {
			cout << "Год дракона" << endl;
			break;
		}
		case 9: {
			cout << "Год змеи" << endl;
			break;
		}
		case 10: {
			cout << "Год лошади" << endl;
			break;
		}
		case 11: {
			cout << "Год овцы" << endl;
			break;
		}
		default: {
			cout << "Неккоректно введен год " + year << endl;
        }
    }
	system("pause");
}







