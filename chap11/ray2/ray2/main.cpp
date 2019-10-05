//��Fish::Swim()����Ϊ�麯��������Ӱ��.�������̬���ǣ��������������Ϊ������󣬲�ִ���������Swim()ʵ��
#include <iostream>
using namespace std;

class Fish
{
public:
	virtual void Swim()
	{
		cout << "Fish swim" << endl;
	}
};

class Tuna :public Fish
{
public:
	void Swim()
	{
		cout << "Tuna swim" << endl;
	}
};

class Carp :public Fish
{
public:
	void Swim()
	{
		cout << "Carp swim" << endl;
	}
};

void MakeFishSwim(Fish& inputFish)
{
	inputFish.Swim();
}

int main()
{
	Tuna mydinner;
	Carp mylunch;

	MakeFishSwim(mydinner);
	MakeFishSwim(mylunch);

	return 0;
}