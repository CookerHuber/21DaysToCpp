//ʹ�ù��캯����ʼ�����Ա����
#include <iostream>
#include<string>
using namespace std;

class Human
{
private:
	int age;
	string name;

public:
	Human()//���캯��
	{
		age = 0;//��ʼ��
		cout << "������һ��Humanʵ��" << endl;
	}
	void SetName(string humansName)
	{
		name = humansName;
	}
	void SetAge(int humansAge)
	{
		age = humansAge;
	}
	void IntroduceSelf()
	{
		cout << "I am " + name << " and am ";
		cout << age << " years old" << endl;
	}
};

int main()
{
	Human firstMan;
	firstMan.SetName("David");
	firstMan.SetAge(28);

	firstMan.IntroduceSelf();

	return 0;
}