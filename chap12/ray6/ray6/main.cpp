//���ص��������==�Ͳ��������!=
#include<iostream>
using namespace std;

class Date
{
private:
	int day, month, year;
public:
	Date(int inMonth, int inDay, int inYear)
		:month(inMonth), day(inDay), year(inYear) {};

	bool operator==(const Date& compareTo)
	{
		return((day==compareTo.day))
	}
};