//������ʼ���б�������๹�캯��
#include <iostream>
using namespace std;

class Fish
{
protected:
	bool isFreshWaterFish;
public:
	//Fish���캯��
	Fish(bool isFreshWater) :isFreshWaterFish(isFreshWater) {}
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
	Tuna() :Fish(true) {}//���캯����ʼ��
};

class Carp :public Fish
{
public:
	Carp() :Fish(false) {}//���캯����ʼ��
};

int main()
{
	Tuna mylunch;
	Carp mydinner;

	cout << "here are my food:"<<endl;
	cout << "my lunch: ";
	mylunch.swim();
	cout << "my dinner: ";
	mydinner.swim();

	return 0;
}