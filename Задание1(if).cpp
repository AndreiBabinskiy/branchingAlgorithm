#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUSSIAN");

	int year;

	cout << "������� ��� : " << endl;
	cin >> year;

	if (year < 2021) {
		cout << "������� ���" << endl;
	}
	else if (year > 2021) {
		cout << "������� ���" << endl;
	}

	else if (year == 2021) {
		cout << "������� ���" << endl;
	}

	if (year % 2 == 0) {
		cout << "������ �����" << endl;
	}
	else {
		cout << "�������� �����" << endl;
	}

	if (year % 400 == 0) {
		cout << "����������" << endl;
	}
	else {
		cout << "�� ����������" << endl;
	}
	system("pause");
}







