//ʹ��do-whileѭ���ظ�ִ�д����
#include <iostream>
using namespace std;

int main()
{
	char userSelection = 'x';//��ʼ��
	do
	{
		cout << "enter two numbers:" << endl;
		int num1 = 0, num2 = 0;
		cin >> num1;
		cin >> num2;

		cout << num1 << " X " << num2 << " = " << num1*num2 << endl;
		cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;

		cout << "press x to quit or other key to continue" << endl;
		cin >> userSelection;
	} while (userSelection != 'x');
	cout << "goodBye!" << endl;
	return 0;
}