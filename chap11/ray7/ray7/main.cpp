//ʹ����̳н����������
//Ѽ���޼̳������� ������ ���࣬�����߾��̳��Զ�����
//���³�����Զ�Ѽ����ʵ����ʱ����ʵ�������ٸ�animal��
//ÿ��Platuypusʵ���������ٸ�����animal��ʵ��
#include <iostream>
using namespace std;

class Animal
{
public:
	Animal()
	{
		cout << "Constructed Animal" << endl;
	}
	//sample member
	int age;
};

class Mammal :public Animal
{
};

class Bird :public Animal
{
};

class Reptile :public Animal
{
};

class Platypus :public Mammal, public Bird, public Reptile
{
public:
	Platypus()
	{
		cout << "Platypus constructed" << endl;
	}
};

int main()
{
	Platypus duckBilledP;
	//duckBilledP.age = 25;//�ᵼ�±��������Ϊȷ�����õ���Mammal::Animal::age��Bird::Animal::age ���� Reptile::Animal::age
	return 0;
}