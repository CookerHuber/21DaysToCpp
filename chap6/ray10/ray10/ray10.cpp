//ʹ��forѭ����ʡ���޸ı�������䣩�����û������ظ�ִ�м���
#include <iostream>
using namespace std;

int main()
{
	//����ѭ���б����ĸı�
	for (char userSelection = 'm'; (userSelection != 'x');)
	{
		cout << "enter two integers: " << endl;
		int num1 = 0, num2 = 0;
		cin >> num1;
		cin >> num2;

		cout << num1 << " x " << num2 <<" = "<< (num1*num2) << endl;
		cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
		cout << "press x to quit or other key to continue!" << endl;
		cin >> userSelection;
	}

	cout << "Goodbye!" << endl;
	return 0;
}