//��дһ��circle�࣬����ʵ����ʱ�ṩ�İ뾶����������ܳ�����pi������һ��˽�г�Ա�����У��ó���������������ʡ�
#include<iostream>
using namespace std;

class Circle
{
private:
	double pi;
	double radius;
public:
	Circle(double inputRaidus):
		radius ( inputRaidus), pi ( 3.14){}
	double GetCircle()
	{
		return 2 * pi*radius;
	}
	double GetArea()
	{
		return pi*radius*radius;
	}
};

int main()
{
	cout << "enter the radius: ";
	double radius = 0;
	cin >> radius;

	Circle myCircle(radius);
	cout << "Բ���ܳ�Ϊ��" << myCircle.GetCircle() << endl;
	cout << "Բ�����Ϊ��" << myCircle.GetArea() << endl;
	return 0;
}