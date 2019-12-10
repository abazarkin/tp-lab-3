#pragma once
#include <iostream>
#include <ctime>
#include <string>


class DateTime{
	private:
		tm date_time;
		static string months[],
					  days[];
		string getData(&tm);
	public:
		DateTime(int, int, int);
		DateTime();
		DateTime(const DateTime&);
		string getToday(),
			   getYesterday(),
			   getTomorrow(),
			   getFuture(unsigned int),
			   getPast(unsigned int);
		int getDifference(DateTime&);
};
