//���鼰��ϰ
//��д�������غ������ֱ�ʹ�����й�ʽ�������Բ�������
#include <iostream>
using namespace std;
const double pi = 3.1416;

//��������
double Volume(double radius);
double Volume(double radius, double height);

int main()
{
	cout << "enter the radius: ";
	double radius = 0;
	cin >> radius;

	cout << "enter the height: ";
	double height = 0;
	cin >> height;

	cout << "������Ϊ��" << Volume(radius) << endl;
	cout << "Բ�������Ϊ��" << Volume(radius, height) << endl;

	return 0;
}

double Volume(double r)
{
	return (4 * pi*r*r*r) / 3;
}

double Volume(double r, double h)
{
	return (pi*r*r*h);
}