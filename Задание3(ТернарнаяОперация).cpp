#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUSSIAN");

	double x;
	double y;

	cout << "������� ������ ����������� ����� x: " << endl;
	cin >> x;

	cout << "������� ������ ����������� ����� y: " << endl;
	cin >> y;
	
	x <= -2 && y >= 1 ? cout << "����" << endl : cout << "�����" << endl;

	system("pause");
}