//ʹ��const����ȷ�������õĺ��������޸İ����ô����ֵ
#include <iostream>
using namespace std;

void getSquareo(const int& number,int& result)
{
	result = number*number;
}

int main()
{
	cout << "enter a number you wish to square: ";
	int numberIn = 0;
	cin >> numberIn;

	int square = 0;
	getSquareo(numberIn, square);
	cout << "number" << "^2 = " << square << endl;

	return 0;

}