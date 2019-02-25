#include <iostream>
#include <string>
#include "date.h"
#include "pch.h"
Date::Date()
{
	 day = 1;
	 month = 1;
	 year = 2000;
	
}
Date::Date(int d, int m, int y)
{
	setDay(d);
	setMonth(m);
	setYear(y);
}

void Date::setDay(int d)
{
	int leap;
	leap = year % 4;
	int leaphund;
	leaphund = year % 400;

	if (day > 31 && (month != 4 || month != 6 || month != 9 || month != 11))
	{
		day = 1;
		
	}
	else if (day > 30 &&  (month == 6 || month == 9 || month == 11 || month == 4))
	{
		day = 1;
		
	}
	else if (day > 28 && (month == 2) && ((leap != 0) && (leaphund != 0)))
	{
		day = 1;
		
	}
	else if (day > 29 && (month == 2) && ((leap == 0) || (leaphund == 0)))
	{
		day = 1;
		

	}


	else
	{
		day = d;
	}
}

	
void Date::setMonth(int m) 
{
	
	month = m;
}
void Date::setYear(int y) 
{
	year = y;
}

const int Date::nextDay(int d)
{
	day = d + 1;

	int leap;
	leap = year % 4;
	int leaphund;
	leaphund = year % 400;


	if (day > 31 && (month != 4 || month != 6 || month != 9 || month != 11 ))
	{
		day = 1;
		month = month + 1;

	}
	else if (day > 30 && (month == 6 || month == 9 || month == 11 || month == 4))
	{
		day = 1;
		month = month + 1;

	}
	else if (day > 28 && (month == 2) && ((leap != 0) && (leaphund != 0)))
	{
		day = 1;
		month = month + 1;
	}
	else if (day > 29 && (month == 2) && ((leap == 0) || (leaphund == 0)))
	{
		day = 1;
		month = month + 1;

	}

	
	return day;
}

const int Date::nextMonth(int m) 
{
	month = m + 1;

	if (month > 12) 
	{
		month = 1;
		year++;
	}


	return month;
}
const int Date::nextYear(int y)
{
	year = year + 1;

	return year;
}
const int Date::getDay()
{
	return day;
}
const int Date::getMonth()
{
	return month;
}
const int Date::getYear()
{
	return year;
}
const void Date::newDate() 
{
	if (day > 31 || day < 1)
	{
		std::cout << "This day isnt valid. Look at your calender again" << std::endl;
		exit(EXIT_FAILURE);
		if (month > 12 || month < 1)
		{
			std::cout << "This month isnt valid. When someone says there are a dozen months, they mean only 12 " << std::endl;
			exit(EXIT_FAILURE);
			 if (year < 1)
			{
				std::cout << "This year isnt valid. This program cant go to B.C." << std::endl;
				exit(EXIT_FAILURE);
			}
		}
	}
	

	std::cout << "The date in the good ol' USA: " << month << "/" << day << "/" << year << std::endl;
	std::cout << "The date in the prettay English 'sles: " << day << "/" << month << "/" << year << std::endl;
}
const void Date::nextDate()
{
	
	std::cout << "Tomorrow in the good ol' USA: " << month << "/" << day << "/" << year << std::endl;
	std::cout << "Tomoreow in da English 'sles: " << day << "/" << month << "/" << year << std::endl;
}