//ʹ��new(nothrow),���ڷ����ڴ�ʧ��ʱ����NULL
#include <iostream>
using namespace std;

int main()
{
	int* pointsToManyNums = new(nothrow) int[0x1fffffff];
	//���û��nothrow�Ļ�������������nothrow�ᱣ֤�޷������ڴ�ʱ������null
	//���൱�ڳ�ʼ��ΪNULL
	if (pointsToManyNums)
	{
		delete[] pointsToManyNums;
	}
	else
		cout << "memory allocation failed.ending program." << endl;

	return 0;
}