//ray7��������Ӧ�ñ�֤Ѽ����ֻ��һ��age���ԣ���ʵ�ʲ�����ô���£�Ҫ��֤����ִ�У��ɽ�����Animal����������Ϊvirtual��Ѽ��������Ϊfinal
//
#include<iostream>
using namespace std;

class Animal
{
public:
	Animal()
	{
		cout << "Animal constructed" << endl;
	}
	int age;
};

class Mammal :public virtual Animal
{
};

class Reptile :public virtual Animal
{
};

class Bird :public virtual Animal
{
};

class Platypus final :public Mammal, public Reptile, public Bird //ʹ�ùؼ���final�Խ�ֹ��Platypus��������
{
public:
	Platypus()
	{
		cout << "Platypus constructed" << endl;
	}
};

int main()
{
	Platypus duckBilled;
	duckBilled.age = 23;
	cout << "Ѽ��������Ϊ��" << duckBilled.age << endl;
	return 0;
}