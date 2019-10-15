//ģ���࣬ʹ��ģ����ʱ����Ҫָ��ģ�����������
//һ��ģ��ʾ��������������Ա���Ե�ģ����

#include <iostream>
using namespace std;

//template with default params: int & double
template <typename T1=int,typename T2=double>
class HoldsPair
{
private:
	T1 value1;
	T2 value2;
public:
	HoldsPair(const T1& val1, const T2& val2) //constructor
		:value1(val1), value2(val2) {}

	//Accessor functions
	const T1 & GetFirstValue() const
	{
		return value1;
	}

	const T2 & GetSecondValue() const
	{
		return value2;
	}
};

int main()
{
	HoldsPair<> PairIntDbl(300, 10.09);
	HoldsPair<short, const char*> PairShortStr(25, "learn templates,love C++");

	cout << "The first object contains -" << endl;
	cout << "Value 1: " << PairIntDbl.GetFirstValue() << endl;
	cout << "Value 2: " << PairIntDbl.GetSecondValue() << endl;

	cout << "The second object contains -" << endl;
	cout << "Value 1: " << PairShortStr.GetFirstValue() << endl;
	cout << "Value 2: " << PairShortStr.GetSecondValue() << endl;

	return 0;
}