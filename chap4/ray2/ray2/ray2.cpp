//������Ԫ�ظ�ֵ
#include <iostream>
using namespace std;
//ʹ�ó������ʽ
constexpr int Square(int number) { return number*number; }

int main()
{
	const int ARRAY_LENGTH = 5;
	//����5��Ԫ�ص�����
	int myNumbers[ARRAY_LENGTH] = { 5,10,-11,12,13 };

	//���ó������ʽ����25��Ԫ�ص�����
	int moreNumbers[Square(ARRAY_LENGTH)];

	//����һ������Ԫ��

	//����������Ԫ�ص�λ��
	cout << "�����������Ԫ�ص����У�";
	int numberIndex = 0;
	cin >> numberIndex;

	//�����µ�Ԫ��ֵ
	cout << "��������Ԫ��ֵ��";
	int newValue = 0;
	cin >> newValue;

	//����������ֱ���и���
	myNumbers[numberIndex] = newValue;
	moreNumbers[numberIndex] = newValue;

	cout << "element " << numberIndex << " in array myNumbers is: ";
	cout << myNumbers[numberIndex] << endl;

	cout << "element " << numberIndex << " in array moreNumbers is: ";
	cout << moreNumbers[numberIndex] << endl;

	//cout << "�µ�myNumbers����Ϊ��" << myNumbers << endl;
	//cout << "�µ�moreNumbers����Ϊ��" << moreNumbers << endl;
	return 0;
}