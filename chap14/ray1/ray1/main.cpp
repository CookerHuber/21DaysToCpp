//chap14 ���ģ����
//#define���Զ��峣����Ҳ���Զ���꺯��

//������ʹ�ö��峣���ĺ�
#include<iostream>
#include<string>
using namespace std;

#define ARRAY_LENGTH 25
#define PI 3.1416
#define MY_DOUBLE double
#define FAV_WHISKY "Jack Daniels"

int main()
{
	int numbers[ARRAY_LENGTH] = { 0 };
	cout << "array's length is: " << sizeof(numbers) << endl;

	cout << "Enter a radius: ";
	MY_DOUBLE radius = 0;
	cin >> radius;
	cout << "area is: " << (PI*radius*radius) << endl;

	string favoriteWhisky(FAV_WHISKY);
	cout << " my beer is: " << favoriteWhisky << endl;

	return 0;
}

//���峣��ʱ�����õ�ѡ����ʹ��const���������ͣ���Ϊʹ��#define�޷��������ݵ�����

//ʹ�ú�����ΰ������е�����£�����ͷ�ļ��˴˰����Է������µݹ����⣬�ɽ��ʹ�ú��Լ�Ԥ����������ָ��#ifndef��#endif��