//һ��ʹ��operator()ʵ�ֵĺ������� 
#include<iostream>
#include<string>
using namespace std;

class Display
{
public:
	void operator () (string input) const
	{
		cout << input << endl;
	}
};

int main()
{
	Display displayFuncObj;

	//equivalent to diaplayFuncObj.operator () ("Display this string");
	displayFuncObj("Display this string");

	return 0;
}