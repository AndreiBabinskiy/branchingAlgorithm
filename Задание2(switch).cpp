#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUSSIAN");

	int year;

	cout << "������� ��� ��������� : " << endl;
	cin >> year;

	switch (year % 12) { // ��� �������� ��� ������� = 0, ������ ��������, =1 ������
		case 0: {
			cout << "��� ��������" << endl;
			break;
		}
		case 1: {
			cout << "��� ������" << endl;
			break;
		}
		case 2: {
			cout << "��� ������" << endl;
			break;
		}
		case 3: {
			cout << "��� ������" << endl;
			break;
		}
		case 4: {
			cout << "��� �����" << endl;
			break;
		}
		case 5: {
			cout << "��� ����" << endl;
			break;
		}
		case 6: {
			cout << "��� �����" << endl;
			break;
		}
		case 7: {
			cout << "��� �������" << endl;
			break;
		}
		case 8: {
			cout << "��� �������" << endl;
			break;
		}
		case 9: {
			cout << "��� ����" << endl;
			break;
		}
		case 10: {
			cout << "��� ������" << endl;
			break;
		}
		case 11: {
			cout << "��� ����" << endl;
			break;
		}
		default: {
			cout << "����������� ������ ��� " + year << endl;
        }
    }
	system("pause");
}







