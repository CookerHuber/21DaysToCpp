//ʹ�ýӴ����������*���������е�Ԫ���Լ������������[]����ָ��
//�����������ָ�룬���*�����������飬Ҳ���Խ�[]����ָ��
#include <iostream>
using namespace std;

int main()
{
	const int numArray = 5;
	int myNums[numArray] = { 24,-1,234,-999,10 };

	int* pointToNums = myNums;
	//*�������������
	cout << "ָ���������������" << endl;
	for (int index = 0; index < numArray; ++index)
		cout << "element " << index << " = " << *(myNums + index) << endl;
	//[]���������ָ��
	cout << "�������������ָ��" << endl;
	for (int index = 0; index < numArray; ++index)
		cout << "element " << index << " = " << pointToNums[index] << endl;

	return 0;
}