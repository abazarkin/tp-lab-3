#include "DateTime.h"
using namespace std;


string DateTime::months[]={ "january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december" };
string DateTime::days[] = { "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };


DateTime::DateTime(int day, int month, int year){
	time_t sec = time(NULL);
	date_time = *localtime(&sec);
	date_time.tm_mday = day;
	date_time.tm_mon = month - 1;
	date_time.tm_year = year;
	mktime(&date_time);
}

DateTime::DateTime(){
	time_t sec = time(NULL);
	date_time = *localtime(&sec);
	cout << date_time.tm_wday;
}

DateTime::DateTime(const DateTime &cpy){
	date_time = cpy.date_time;
}

string DateTime::getData(tm &date_time){
	string dat = "";
	if (date_time.tm_mday > 9)
		dat += to_string(date_time.tm_mday);
	else
		dat = "0" + to_string(date_time.tm_mday);
	dat += " " + months[date_time.tm_mon] + " " + to_string(date_time.tm_year + 1900) + ", " + days[date_time.tm_wday];
}

string DateTime::getPast(unsigned int N){
	time_t sec = mktime(&date_time);
	sec -= N*86400;
	return getData(*localtime(&sec));
}

string DateTime::getFuture(unsigned int N){
	time_t sec = mktime(&date_time);
	sec += N*86400;
	return getData(*localtime(&sec));
}

string DateTime::getToday(){
	return getData(date_time);
}

string DateTime::getYesterday(){
	return getPast(1);
}

string DateTime::getTomorrow(){
	return getFuture(1);
}

int DateTime::getDifference(DateTime &dat){
	return abs(mktime(&date_time) - mktime(&dat.date_time));
}
