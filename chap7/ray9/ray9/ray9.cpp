//�����ò����������Ƿ���ֵ���ķ�ʽ�ṩԲ�����
#include <iostream>
using namespace std;

const double pi = 3.1416;

void Area(double radius, double& area)
{
	//ע������������&��ͬʱ�����������void�ͣ�û�з���ֵ
	area = pi*radius*radius;
}

int main()
{
	cout << "enter the radius: ";
	double radius = 0;
	cin >> radius;

	double areaFetched = 0;
	Area(radius, areaFetched);//ע��þ�

	cout << "the area is: " << areaFetched << endl;

	return 0;
}