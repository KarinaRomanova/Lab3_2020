#include <iostream>
#include "Date.h"
using namespace std;
//GetCalendar(CalendarType type) : Calendar
int main()
{
	setlocale(LC_ALL, "rus");
	int day;
	int month;
	int year;
	int type;
	cout << "Выберите тип календаря:\n1. Григорианский\n2. Юлианский\n";  cin >> type;
	cout << "Введите дату\n";
	cout << "Год\n";	cin >> year;
	cout << "Месяц\n";  cin >> month;
	cout << "День\n";	cin >> day;

	Calendar firstCalendar(type);
	GregorianCalendar firstDate;
	JulianCalendar firstDate;

	Date firstDate(day, month, year);

}