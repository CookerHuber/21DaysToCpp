//��дһ��forѭ�����Ե���ʽ��������Ԫ��
#include <iostream>
using namespace std;

int main()
{	
	const int array_len = 5;
	int numsArray[array_len] = { 1,2,3,4,5 };

	for (int counter = array_len-1; counter >= 0; --counter)
	{
		cout << numsArray[counter] << " ";
	}
	cout << endl;
	return 0;
}