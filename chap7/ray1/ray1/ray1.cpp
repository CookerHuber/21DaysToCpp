//�������ݰ뾶�ֱ����Բ��������ܳ��ĺ���
#include<iostream>
using namespace std;

const double pi = 3.14159265;
//��������
double Area(double radius);
double Circumference(double radius);
int main()
{
	cout << "enter radius: ";
	double radius=0;
	cin >> radius;

	//���ú���
	cout << "Area is: " << Area(radius) << endl;
	cout << "Circumference is: " << Circumference(radius) << endl;

	return 0;
}
double Area(double radius)
{
	return pi*radius*radius;
 }
double Circumference(double radius)
{
	return 2 * pi*radius;
}