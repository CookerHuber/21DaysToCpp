//�����̳л��ƣ�protected������private�̳����ƣ������ڱ����̳в�νṹ�У�����������ܹ����ʻ���Ĺ��кͱ�����Ա��
//��������������ļ̳���˽�еģ���ô�Ͳ�������ô��
//RaceCar���Ա�����ʽ�̳���Car�࣬Car���Ա�����ʽ�̳���Motor��
#include <iostream>
using namespace std;

class Motor
{
public:
	void switchIgnation()
	{
		cout << "Ignation ON" << endl;
	}
	void PumpFuel()
	{
		cout << "Fuel in cylinders" << endl;
	}
	void fireCylinders()
	{
		cout << "Vrooooom" << endl;
	}
};

class Car :protected Motor
{
public:
	void move()
	{
		switchIgnation();
		PumpFuel();
		fireCylinders();
	}
};

class RaceCar :protected Car
{
public:
	void move()
	{
		switchIgnation();
		PumpFuel();
		fireCylinders();
		fireCylinders();
		fireCylinders();
	}
};

int main()
{
	RaceCar myDreamCAR;
	myDreamCAR.move();
	return 0;
}