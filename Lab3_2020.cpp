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
		cout << "Выберите тип календаря:\n1. Григорианский\n2. Юлианский\n";  cin >> type;
		if (type == 1)
		{
			while (k == 0) {
				InputDate(day, month, year);
				GregorianCalendar gregorianCalendar(day, month, year);
				gregorianCalendar.GetWeekday();
				if (gregorianCalendar.IsWeekend())
					cout << "Выходной\n";

				k++;
				cout << "Введите 0 для новой даты\n"; cin >> k;
			
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
						cout << "Выходной\n";

					k++;
					cout << "Введите 0 для новой даты\n"; cin >> k;
				}
			}	
		
			else 
				cout << "Выберите корректный тип!\n"; k = 0;
		}
	}
return 0;
}
void InputDate(int &day, int &month, int &year)

{
	cout << "Введите дату\n";
	cout << "Год\n";	cin >> year;
	cout << "Месяц\n";  cin >> month;
	cout << "День\n";	cin >> day;
}