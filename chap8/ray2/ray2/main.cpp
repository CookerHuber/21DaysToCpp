//��������ʼ��ָ��
#include <iostream>
using namespace std;

int main()
{
	int age = 30;
	int* pointedToInt = &age;//ָ��ĳ�ʼ��������

	//��ӡָ���ֵ
	cout << "integer age is at: 0x" << hex << pointedToInt << endl;

	return 0;
}