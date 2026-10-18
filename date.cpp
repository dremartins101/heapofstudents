#include <iostream>
#include "date.h"
#include <sstream> 

Date::Date(){
	month = 1;
	day = 1;
	year = 1;
} // end constructor

void Date::init(std::string dateString){
	std::stringstream converter;

	std::stringstream sMonth;
	std::stringstream sDay;
	std::stringstream sYear;

	converter.str(dateString);
	getLine(converter, sMonth, '/');
	getLine(converter, sDay, '/');
	getLine(converter, sYear, '/');

	converter.clear();
	converter.str("");

	converter << sMonth;
	converter >> month;
	converter << sDay;
	converter >> day;
	converter << sYear;
	converter >> year;
}
void Date::printDate(){
	std::string months[] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	if (1 <= month <= 12){
		std::cout << months[month] << " " << day << ", " << year << std::endl;
	}
	else{
		std::cout << "Invalid date" << std::endl;
	}
} // end printDate
