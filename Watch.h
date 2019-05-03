#ifndef WATCH_H

class Watch{
private:
  int hour, minute, sec;
public:
  Watch();

  Watch(int hour, int minute, int sec);

  void setHour(int hour);
  int gethr();

  void setMinute(int minute);
  int getmin();

  void setSec(int sec);
  int getsec();

};

#define WATCH_H
#endif
