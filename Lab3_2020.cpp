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
	cout << "�������� ��� ���������:\n1. �������������\n2. ���������\n";  cin >> type;
	cout << "������� ����\n";
	cout << "���\n";	cin >> year;
	cout << "�����\n";  cin >> month;
	cout << "����\n";	cin >> day;

	Calendar firstCalendar(type);
	GregorianCalendar firstDate;
	JulianCalendar firstDate;

	Date firstDate(day, month, year);

}