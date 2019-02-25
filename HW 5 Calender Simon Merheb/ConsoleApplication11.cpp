// ConsoleApplication9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "date.h"

int main()
{
	int d;
	int m;
	int y;
	char raisin;

	std::cout << "What day is it today?" << std::endl;
	std::cout << "The day is: ";
	std::cin >> d;  
	std::cout << "The month is: ";
	std::cin >> m;
	std::cout << "The year is: ";
	std::cin >> y;
	Date customDate(d, m, y);
	customDate.newDate();
	
	std::cout << std::endl;

	std::cout << "The next day is: " << customDate.nextDay(d) << std::endl;
	std::cout << "The next month is: " << customDate.nextMonth(m) << std::endl;
	std::cout << "the next year is: " << customDate.nextYear(y) << std::endl;
	customDate.nextDate();
	
	return 0;
}

