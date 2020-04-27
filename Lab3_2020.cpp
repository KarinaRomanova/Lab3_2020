#include <iostream>
#include "Date.h"
using namespace std;

void InputDate(int &day, int &month, int &year);

int main()
{
	setlocale(LC_ALL, "rus");
	int type;
	int day;
	int month;
	int year;
	int k = 0;

	while (k == 0) 
	{
		cout << "�������� ��� ���������:\n1. �������������\n2. ���������\n";  cin >> type;
		if (type == 1)
		{
			while (k == 0) {
				InputDate(day, month, year);
				GregorianCalendar gregorianCalendar(day, month, year);
				gregorianCalendar.GetWeekday();
				if (gregorianCalendar.IsWeekend())
					cout << "��������\n";

				k++;
				cout << "������� 0 ��� ����� ����\n"; cin >> k;
			
			}
		}

		else
		{
			if (type == 2)
			{
				while (k == 0) {
					InputDate(day, month, year);
					JulianCalendar julianCalendar(day, month, year);
					julianCalendar.GetWeekday();
					if (julianCalendar.IsWeekend())
						cout << "��������\n";

					k++;
					cout << "������� 0 ��� ����� ����\n"; cin >> k;
				}
			}	
		
			else 
				cout << "�������� ���������� ���!\n"; k = 0;
		}
	}
return 0;
}
void InputDate(int &day, int &month, int &year)

{
	cout << "������� ����\n";
	cout << "���\n";	cin >> year;
	cout << "�����\n";  cin >> month;
	cout << "����\n";	cin >> day;
}