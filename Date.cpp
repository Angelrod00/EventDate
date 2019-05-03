#include <iostream>
#include "Date.h"
using namespace std;

Date::Date(){
  month = 0;
  day = 0;
  year = 0;
}

Date::Date(int month, int day, int year){
  this->month = month;
  this->day = day;
  this->year = year;
}

void Date::setMonth(int month){ this->month = month;}
int Date::getMonth(){return this->month;}

void Date::setDay(int day){this->day = day;}
int Date::getDay(){return this->day;}

void Date::setYear(int year){this->year = year;}
int Date::getYear(){return this->year;}
