#pragma once
#include<string>
#include<iostream>

using namespace std;

class Calendar {
	int type;
protected:
	int day;
	int month;
	int year;
	int dayResult;
	int a;
	int yearcalc;
	int monthcalc;
public:
Calendar(int type_, int day_, int month_, int year_)
		:type(type_), day(day_), month(month_), year(year_){}

virtual void GetWeekday() = 0;
virtual bool IsWeekend() = 0;
virtual int GetDaysCount() = 0;
void GetDayResult();

};

class GregorianCalendar : public Calendar
{		
	
public:
	void GetWeekday() override
	{
		a = (14 - month) / 12;
		yearcalc = year - a;
		monthcalc = month + (12 * a) - 2;
		dayResult = (day + (31 * monthcalc) / 12 + yearcalc + yearcalc / 4 - yearcalc / 100 + yearcalc / 400) % 7;
		
	}
	Calendar::GetDayResult;
	
	
};
class JulianCalendar : public Calendar
{
	void GetWeekday() override
	{
		a = (14 - month) / 12;
		yearcalc = year - a + 4800;
		monthcalc = month + (12 * a) - 3;
		dayResult = day + (153 * monthcalc+2) / 5 + 365*yearcalc + yearcalc / 4 - yearcalc / 100 + yearcalc / 400 - 32045;

	}
	Calendar::GetDayResult;

};
