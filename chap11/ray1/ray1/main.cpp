//��̬
//��Tunaʵ�����ݸ�Fish��������ͨ���ò������÷���
#include <iostream>
using namespace std;

class Fish
{
public:
	void swim()
	{
		cout << "fish swim" << endl;
	}
};

class Tuna :public Fish
{
public:
	void swim()
	{
		cout << "Tuna swim" << endl;
	}
};

void childTuna(Fish& inputFish)
{
	inputFish.swim();
}

int main()
{
	Tuna mydinner;
	mydinner.swim();
	childTuna(mydinner);

	return 0;
}