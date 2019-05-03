#ifndef DATE_H

class Date{
private:

  int month, day, year;
  
public:

  Date();

  Date(int month, int day, int year);

  void setMonth(int month);
  int getMonth();

  void setDay(int day);
  int getDay();

  void setYear(int year);
  int getYear();

};

#define DATE_H
#endif
