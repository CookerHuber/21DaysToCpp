//������࣬���������࣬��ô�Ͳ���ʵ�������࣬���ǳ������ᱣ֤���������ʵ�ֻ����������ĺ��� 
//����11.6 Fish��Tuna��Carp�ĳ������
#include<iostream>
using namespace std;

class Fish
{
public:
	//define a pure virtual function Swim
	virtual void Swim() = 0;
};

class Tuna :public Fish
{
public:
	void Swim()
	{
		cout << "Tuna swims fast in the sea!" << endl;
	}
};

class Carp :public Fish
{
public:
	void Swim()
	{
		cout << "Carp swims slow in the lake" << endl;
	}
};

void MakeFishSwim(Fish& inputFish)
{
	inputFish.Swim();
}

int main()
{
	//Fish MyFish; //�޷�����Fish��ʵ��
	Carp myLunch;
	Tuna myDinner;

	MakeFishSwim(myLunch);
	MakeFishSwim(myDinner);

	return 0;
}