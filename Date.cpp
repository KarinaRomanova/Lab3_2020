#include "Date.h"
#include "DT.h"
using namespace std;


GregorianCalendar::GregorianCalendar(int day_, int month_, int year_)
	: day(day_), month(month_), year(year_) 
{
	DateTime dt;
	bool isDateCorrect = dt.checkDate(year, month, day);
	if (!isDateCorrect) {
		cout << "���� �� �����!" << endl;
		exit(1);
	}
}
void  GregorianCalendar::GetWeekday()
{
	a = (14 - month) / 12;
	yearcalc = year - a;
	monthcalc = month + (12 * a) - 2;
	dayResult = (day + (31 * monthcalc) / 12 + yearcalc + yearcalc / 4 - yearcalc / 100 + yearcalc / 400) % 7;
	string dayString;
	switch (dayResult) {
	case 0:
		dayString = "�����������";
		cout << dayString << endl;
		break;
	case 1:
		dayString = "�����������";
		cout << dayString << endl;
		break;
	case 2:
		dayString = "�������";
		cout << dayString << endl;
		break;
	case 3:
		dayString = "�����";
		cout << dayString << endl;
		break;
	case 4:
		dayString = "�������";
		cout << dayString << endl;
		break;
	case 5:
		dayString = "�������";
		cout << dayString << endl;
		break;
	case 6:
		dayString = "�������";
		cout << dayString << endl;
		break;
	default:
		cout << "Error";
		break;
	}
}
int GregorianCalendar::GetDaysCount()
{
	{
		switch (month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
			break;
		case 2:
			if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
				return 29;
			else
				return 28;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
			break;
		}
	}
}
bool GregorianCalendar::IsWeekend()
{
	if (dayResult == 6 || dayResult == 0 || (day == 31 && month == 12) || (day == 8 && month == 3) || (day == 23 && month == 2) || (day == 9 && month == 5) || (day == 1 && month == 5))
		return true;
	else
		return false;
}

JulianCalendar::JulianCalendar(int day_, int month_, int year_)
	: day(day_), month(month_), year(year_)
{
	DateTime dt;
	bool isDateCorrect = dt.checkDate(year, month, day);
	if (!isDateCorrect) {
		cout << "���� �� �����!" << endl;
		exit(1);
	}
}
void JulianCalendar::GetWeekday()
{
	a = (14 - month) / 12;
	yearcalc = year - a + 4800;
	monthcalc = month + (12 * a) - 3;
	dayResult = (day + 153*monthcalc + 2/5 + 365*yearcalc + yearcalc/4 - 32083)%7;
	string dayString;

	switch (dayResult) {
	case 6:
		dayString = "�����������";
		cout << dayString << endl;
		break;
	case 0:
		dayString = "�����������";
		cout << dayString << endl;
		break;
	case 1:
		dayString = "�������";
		cout << dayString << endl;
		break;
	case 2:
		dayString = "�����";
		cout << dayString << endl;
		break;
	case 3:
		dayString = "�������";
		cout << dayString << endl;
		break;
	case 4:
		dayString = "�������";
		cout << dayString << endl;
		break;
	case 5:
		dayString = "�������";
		cout << dayString << endl;
		break;
	default:
		cout << "Error";
		break;
	}
}
int JulianCalendar::GetDaysCount()
{
	{
		switch (month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
			break;
		case 2:
			if (year % 4 == 0)
				return 29;
			else
				return 28;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
			break;
		}
	}
}
bool JulianCalendar::IsWeekend()
{
	if (dayResult == 6 || dayResult == 5 || (day == 31 && month == 12) || (day == 8 && month == 3) || (day == 23 && month == 2) || (day == 9 && month == 5) || (day == 1 && month == 5))
	{
		return true;
	}
	else
	{
		return false;
	}
}





