//ʹ��new[...]�����ڴ棬��ʹ��delete[]�ͷ�����
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "�����������ݵ���Ŀ��";
	int numEntries = 0;
	cin >> numEntries;

	int* myNums = new int[numEntries];

	cout << "memory allocated at: 0x" << myNums << endl;

	delete[] myNums;
	return 0;
}