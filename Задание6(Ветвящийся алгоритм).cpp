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

	cout << "������� m = " << endl;
	cin >> m;

	cout << "������� k = " << endl;
	cin >> k;
	
	
	if(0 <= k && k < m) {
		t2 = pow(sin(5 * k + 3 * m * log(fabs(k))), 2);
		cout << "����������� �������� �� 1 ����� = " << t2 << endl;
	}

	if (k >= m) {
		t2 = pow(cos(5 * k + 3 * m * log(fabs(k))), 2);
		cout << "����������� �������� �� 2 ����� = " << t2 << endl;
	}
	/*if (k == 0 || m == 0) {
		cout << "������� �� ���� ����������" << endl;
	}*/
	return;
}