#include <iostream>
#include "Date.h"
using namespace std;



int main()
{
	setlocale(LC_ALL, "rus");
	int type;
	int day;
	int month;
	int year;
	cout << "������� ����\n";
	cout << "���\n";	cin >> year;
	cout << "�����\n";  cin >> month;
	cout << "����\n";	cin >> day;
	int k = 0;	
	GregorianCalendar gregorianCalendar(day, month, year);
	JulianCalendar julianCalendar(day, month, year);
	while (k == 0) {
	
		cout << "�������� ��� ���������:\n1. �������������\n2. ���������\n";  cin >> type;
		if (type == 1)
		{
			gregorianCalendar.GetWeekday();
			if (gregorianCalendar.IsWeekend())
			{
				cout << "��������\n";
			}
			k++;
			cout << "������� 0 ��� ����� ����\n"; cin >> k;
		}

		else
		{
			if (type == 2)
			{
				julianCalendar.GetWeekday();
				if (julianCalendar.IsWeekend())
				{
					cout << "��������\n";
				}
				k++;
				cout << "������� 0 ��� ����� ����\n"; cin >> k;
			}
			else {
				cout << "�������� ���������� ���!\n";
			}


			return 0;
		}
	}
}