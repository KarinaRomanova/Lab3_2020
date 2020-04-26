#include "Date.h"
#include "DT.h"

void Calendar::GetDayResult()
{
	string dayString;
	switch (dayResult) {
	case 0:
		dayString = "Sunday";
		cout << dayString << endl;
		break;
	case 1:
		dayString = "Monday";
		cout << dayString << endl;
		break;
	case 2:
		dayString = "Tuesday";
		cout << dayString << endl;
		break;
	case 3:
		dayString = "Wednesday";
		cout << dayString << endl;
		break;
	case 4:
		dayString = "Thursday";
		cout << dayString << endl;
		break;
	case 5:
		dayString = "Friday";
		cout << dayString << endl;
		break;
	case 6:
		dayString = "Saturday";
		cout << dayString << endl;
		break;
	default:
		cout << "Error";
		break;
	}
}
//GetWeekDay(DateTime dt) : WeekDay, определ€ющую день недели по заданной дате;
//IsWeekend(DateTime dt) : boolean, определ€ющую €вл€етс€ ли заданна€ дата выходным днем по календарю(учесть несколько праздников);
//GetDaysCount
//
//Date::Date(int date_day, int date_month, int date_year)
//	:day(date_day), month(date_month), year(date_year)
//{
//	DateTime dt;
//	bool isDateCorrect = dt.checkDate(year, month, day);
//	if (!isDateCorrect) {
//		cout << "ƒата не верна!" << endl;
//		exit(1);
//	}
//	int a;
//	int yearcalc;
//	int monthcalc;
//	a = (14 - month) / 12;
//	yearcalc = year - a;
//	monthcalc = month + (12 * a) - 2;
//	dayResult = (day + (31 * monthcalc) / 12 + yearcalc + yearcalc / 4 - yearcalc / 100 + yearcalc / 400) % 7;
//}
