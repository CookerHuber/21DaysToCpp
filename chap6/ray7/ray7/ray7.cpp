//ʹ��whileѭ��ʵ���û��ܹ��ظ�����
#include <iostream>
using namespace std;

int main()
{
	char userSelection = 'm';//��־��ʼ��
	while (userSelection != 'x')
	{
		cout << "enter two integers:" << endl;
		int num1 = 0, num2 = 0;
		cin >> num1;
		cin >> num2;

		cout << num1 << " x " << num2 << " = " << num1*num2 << endl;
		cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

		cin >> userSelection;
	}
	cout << "goodbye!" << endl;
	return 0;
}