#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUSSIAN");

	double m;
	double k;
	double t2;

	cout << "Введите m = " << endl;
	cin >> m;

	cout << "Введите k = " << endl;
	cin >> k;
	
	
	if(0 <= k && k < m) {
		t2 = pow(sin(5 * k + 3 * m * log(fabs(k))), 2);
		cout << "Прохождение проходит по 1 ветве = " << t2 << endl;
	}

	if (k >= m) {
		t2 = pow(cos(5 * k + 3 * m * log(fabs(k))), 2);
		cout << "Прохожденте проходит по 2 ветве = " << t2 << endl;
	}
	/*if (k == 0 || m == 0) {
		cout << "Деление на ноль невозможно" << endl;
	}*/
	return;
}