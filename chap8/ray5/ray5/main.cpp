//ʹ��ָ��ͽ�������������������
#include <iostream>
using namespace std;

int main()
{
	int dogsAge = 30;
	cout << "initialized dogsAge = " << dogsAge << endl;

	int* pointsToAnAge = &dogsAge;
	cout << "enter the age of your dog: ";
	cin >> *pointsToAnAge;

	cout << "input stored at 0x" << hex << pointsToAnAge << endl;
	cout << "integer  dogsAge = " << dec << dogsAge << endl;

	return 0;
}