//�쳣����-��newʧ��ʱ���Ƶ��˳�
#include <iostream>
using namespace std;

int main()
{
	try
	{
		//�����ڴ�
		int* pointsToManyNums = new int[0x1fffffff];

		delete[] pointsToManyNums;
	}
	catch (bad_alloc)
	{
		cout << "memory allocation failed.ending program" << endl;
	}

	return 0;
}