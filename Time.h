#ifndef TIME_H
#define TIME_H
#include <iostream>

class Time
{
private:
	int days;
	int hours;
	int minutes;
	int seconds;
public: 
	Time();
	Time(int d, int h, int m, int s);
	Time(int h, int m, int s);
	Time(int h, int m);
	void simplify();
	int getDays() const;
	int getHours() const;
	int getMinutes() const;
	int getSeconds() const;
	Time operator+(Time& right);
	Time operator-(Time& right);
	Time operator++();
	Time operator++(int);
	Time operator--();
	Time operator--(int);
	bool operator<(Time& right);
	bool operator>(Time& right);
	friend std::ostream& operator<<(std::ostream& strm, const Time& obj);
	operator int();
};

#endif