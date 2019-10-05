//�ڻ��෽���� main( )�У�ʹ������������������::�������û��෽��
#include <iostream>
using namespace std;

class Fish
{
protected:
	bool isFreshWaterFish;
public:
	Fish(bool isFreshWater) :isFreshWaterFish(isFreshWater) {}//���캯��
	void swim()
	{
		if (isFreshWaterFish)
			cout << "swim in lake" << endl;
		else
			cout << "swim in sea" << endl;
	}
};

class Tuna :public Fish
{
public:
	Tuna() :Fish(true) {}//���캯��
	void swim()
	{
		cout << "swim fast" << endl;
		Fish::swim();//ʹ�������������::���û���Fish����
	}
};

class Carp :public Fish
{
public:
	Carp() :Fish(false) {}//���캯��
	void swim()
	{
		cout << "swim slow" << endl;
	}
};

int main()
{
	Tuna mylunch;
	Carp mydinner;
	cout << "here are my food:" << endl;
	cout << "lunch:";
	mylunch.swim();
	cout << "dinner:";
	mydinner.swim();
	mydinner.Fish::swim();//��ʾҪ����fish���swim����

	return 0;
}