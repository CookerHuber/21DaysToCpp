//car����˽�з�ʽ�̳�motor�࣬��˼�������̳з������ķ�������������
//��������һ��FuelCar��̳���Car�࣬��ô��������֮����ʲô�̳й�ϵ��FuelCar�඼���ܷ���Motor��ķ�����
#include <iostream>
using namespace std;

class Motor
{
public:
	void SwitchIgnation()
	{
		cout << "Ignation on" << endl;
	}
	void PumpFuel()
	{
		cout << "Fuel in cylinders" << endl;
	}
	void FireCylinders()
	{
		cout << "Vrooom" << endl;
	}
};

class Car :private Motor //private inheritance
{
public:
	void Move()
	{
		SwitchIgnation();
		PumpFuel();
		FireCylinders();
	}
};

int main()
{
	Car myDreamCar;
	myDreamCar.Move();
	//myDreamCar.PumpFuel();//˽�м̳У����ɷ��ʡ����22�и�Ϊpublic�����ɷ���
	return 0;
}