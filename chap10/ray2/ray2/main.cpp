//һ�ָ��õ�Fish����ƣ�ʹ�ùؼ���protected
#include <iostream>
using namespace std;

class Fish
{
protected:
	bool isFreshWaterFish;
public:
	void swim()
	{
		if (isFreshWaterFish)
			cout << "Swim in lake" << endl;
		else
			cout << "Swim in sea" << endl;
	}
};

class Tuna :public Fish
{
public:
	Tuna()
	{
		isFreshWaterFish = true;
	}
};

class Carp :public Fish
{
public:
	Carp()
	{
		isFreshWaterFish = false;
	}
};

int main()
{
	Tuna myLunch;
	Carp myDinner;

	cout << "about my food" << endl;
	cout << "lunch:";
	myLunch.swim();
	cout << "dinner:";
	myDinner.swim();

	return 0;
}