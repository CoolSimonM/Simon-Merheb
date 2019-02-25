#include "pch.h"
#include <iostream>
#include <string>
#ifndef DATE_DATE_H
#define DATE_DATE_H

class Date
{
private:
	int day;
	int month;
	int year;
	
public:
	Date();
	Date(int d, int m, int y);
	void setDay(int day);
	void setMonth(int month);
	void setYear(int year);
	const int nextDay(int day);
	const int nextMonth(int month);
	const int nextYear(int year);
	const int getDay();
	const int getMonth();
	const int getYear();
	const void newDate();
	const void nextDate();
};

#endif //inventeory_inventory_h

