//����������Ϊ�����ĺ���
#include <iostream>
using namespace std;

//��������Ҳ���Ǳ���ģ�������û��Ǽ��ϡ�
//��������
void DisplayArray(int numbers[], int length)
{
	for (int index = 0; index < length; ++index)
		cout << numbers[index] << " ";

	cout << endl;
}

void DisplayArray(char characters[], int length)
{
	for (int index = 0; index < length; ++index)
		cout << characters[index] << " ";

	cout << endl;
}

int main()
{
	int numberArray[4] = { 24,12,2,42 };
	DisplayArray(numberArray, 4);
	char charArray[7] = { 'h','e','l','l','0','!','\0' };
	DisplayArray(charArray, 7);

	return 0;
}