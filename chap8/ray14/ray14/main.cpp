//����ȫ��ָ����
#include <iostream>
using namespace std;

int main()
{
	cout << "is it sunny (y/n)? ";
	char userInput = 'y';
	cin >> userInput;

	//ָ�������ͳ�ʼ��
	bool* const isSunny = new bool;
	*isSunny = true;

	if (userInput == 'n')
		*isSunny = false;

	cout << "boolean flag sunny says: " << *isSunny << endl;

	//�ͷ���Ч�ڴ�
	delete isSunny;

	return 0;
}