//ʹ�ý�����������*����ʹ��new������ڴ棬��ʹ��delete�ͷ���
#include <iostream>
using namespace std;

int main()
{
	//Ϊһ��int�����ڴ�
	int* pointsToAge = new int;
	//����������ڴ�洢����
	cout << "enter the dog age :";
	cin >> *pointsToAge;
	//ʹ�ý�����������*ȡֵ
	cout << "age: " << *pointsToAge << " is stored at " << hex << pointsToAge << endl;
	//�ͷ��ڴ棬ֻ��ͨ��new������ڴ�ſ���ͨ��delete�ͷš�
	delete pointsToAge;

	return 0;
}