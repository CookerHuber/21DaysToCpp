//ʹ��continue������һ��ѭ������ʹ��break�˳�����ѭ��
#include<iostream>
using namespace std;

int main()
{
	for (;;)//����ѭ��
	{
		cout << "enter two integers: " << endl;
		int num1 = 0, num2 = 0;
		cin >> num1;
		cin >> num2;

		cout << "do you wish to correct the numbers?(y/n)" << endl;
		char changeNumbers = '\0';
		cin >> changeNumbers;

		if (changeNumbers == 'y')
			continue;//������y��Ҫ�޸�����ʱ�������µ�ѭ����

		cout << num1 << " x " << num2 << " = " << (num1*num2) << endl;
		cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;

		cout << "press x to quit or other to continue:" << endl;
		char userSelection = '\0';
		cin >> userSelection;

		if (userSelection == 'x')
			break;//ʹ��break����ѭ����
	}
	cout << "Goodbye!" << endl;
	return 0;
}