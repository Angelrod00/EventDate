#include <iostream>
#include "Watch.h"
using namespace std;

Watch::Watch(){
  hour = 0;
  minute = 0;
  sec = 0;
}

Watch::Watch(int hour, int minute, int sec){
  this->hour = hour;
  this->minute = minute;
  this->sec = sec;
}

void Watch::setHour(int hour){this->hour = hour;}
int Watch::gethr(){return this->hour;}

void Watch::setMinute(int minute){this->minute = minute;}
int Watch::getmin(){return this->minute;}

void Watch::setSec(int sec){this->sec = sec;}
int Watch::getsec(){return this->sec;}
