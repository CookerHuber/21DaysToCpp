//����ƽ��ֵ��ͨ�����ò������ؽ���ĺ���
#include <iostream>
using namespace std;

void getSquare(int& number)
{
	number *= number;
}

int main()
{
	cout << "enter a number you want: ";
	int number1 = 0;
	cin >> number1;

	getSquare(number1);
	cout << "square is: " << number1 << endl;

	return 0;

}