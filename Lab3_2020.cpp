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
	cout << "Введите дату\n";
	cout << "Год\n";	cin >> year;
	cout << "Месяц\n";  cin >> month;
	cout << "День\n";	cin >> day;
	int k = 0;	
	GregorianCalendar gregorianCalendar(day, month, year);
	JulianCalendar julianCalendar(day, month, year);
	while (k == 0) {
	
		cout << "Выберите тип календаря:\n1. Григорианский\n2. Юлианский\n";  cin >> type;
		if (type == 1)
		{
			gregorianCalendar.GetWeekday();
			if (gregorianCalendar.IsWeekend())
			{
				cout << "Выходной\n";
			}
			k++;
			cout << "Введите 0 для новой даты\n"; cin >> k;
		}

		else
		{
			if (type == 2)
			{
				julianCalendar.GetWeekday();
				if (julianCalendar.IsWeekend())
				{
					cout << "Выходной\n";
				}
				k++;
				cout << "Введите 0 для новой даты\n"; cin >> k;
			}
			else {
				cout << "Выберите корректный тип!\n";
			}


			return 0;
		}
	}
}