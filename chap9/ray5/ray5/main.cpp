//һ�������صĹ��캯������û��Ĭ�Ϲ��캯������
#include<iostream>
#include<string>
using namespace std;

class Human
{
private:
	int age;
	string name;
public:
	Human(string humansName,int humansAge)
	{
		name = humansName;
		age = humansAge;
	}
	void IntroduceSelf()
	{
		cout << " I am " + name << " and am ";
		cout << age << " years old" << endl;
	}
};

int main()
{
	Human firstMan("David", 32);
	Human firstWoman("Eve", 22);

	firstMan.IntroduceSelf();
	firstWoman.IntroduceSelf();

	return 0;
}
