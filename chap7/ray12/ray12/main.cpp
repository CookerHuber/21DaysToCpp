/*��дһ����������Ϊvoid�ĺ��������ṩ�뾶������£�
�ܹ���������Բ���ܳ������*/
#include <iostream>
using namespace std;

const double pi = 3.1416;

void circumlence(double  radius, double& result)
{
	result = 2 * pi*radius;
}


void CirAndArea(double radius, double& cirResult, double& areaResult)
{
	cirResult= 2 * pi*radius;
	areaResult = pi*radius*radius;
}

int main()
{
	cout << "enter the radius: ";
	double radius=0;
	cin >> radius;

	double circumlenceFetched = 0;

	circumlence(radius, circumlenceFetched);
	cout << "����һ��" << endl;

	cout << "Բ���ܳ�Ϊ��" << circumlenceFetched << endl;
	cout << "Բ�����Ϊ��" << 0.5*circumlenceFetched*radius << endl;

	double cirResultFetched = 0;
	double areaResultFetched = 0;

	CirAndArea(radius, cirResultFetched, areaResultFetched);
	cout << "��������" << endl;

	cout << "Բ���ܳ�Ϊ��" << cirResultFetched << endl;
	cout << "Բ�����Ϊ��" << areaResultFetched << endl;

	return 0;
}