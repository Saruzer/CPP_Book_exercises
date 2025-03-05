#include "Exercise_7.h"
#include <iostream>
namespace Ch5
{
	const int YEAR = 12;
	struct DayInMonth
	{
		int dayCount;
		char monthName[10];
	};
	void Show(const char monthName[YEAR][10],const int dayCount[YEAR])
	{
		for (size_t i = 0; i < YEAR; i++)
		{
			std::cout << monthName[i] << ": " << dayCount[i] << std::endl;
		}
	}
	void Show(const DayInMonth dayInMonth[YEAR])
	{
		for (size_t i = 0; i < YEAR; i++)
		{
			std::cout << dayInMonth[i].monthName << ": " << dayInMonth[i].dayCount << std::endl;
		}
	}
	void Ex7_main()
	{
		char monthName[YEAR][10] = {"Jan","Feb","March","April","May","June","July","August","Sept","Oct","Nov","Dec"};
		int dayCount[YEAR] = {31,28,31,30,31,30,31,31,30,31,30,31};
		Show(monthName, dayCount);
		DayInMonth dayInMonth[YEAR] {};
		for (int i = 0; i < YEAR; i++)
		{
			dayInMonth[i].dayCount = dayCount[i];
			strcpy_s(dayInMonth[i].monthName, 10, monthName[i]);
		}
		Show(dayInMonth);
	}

}
