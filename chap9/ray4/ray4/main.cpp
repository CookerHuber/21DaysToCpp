//����������캯����Human��
#include <iostream>
#include<string>
using namespace std;

class Human
{
public:
	Human()
	{
		age = 0;
		cout << "Ĭ�Ϲ��죬���ֺ����û�����á�" << endl;
	}
	Human(string humansName, int humansAge)
	{
		name = humansName;
		age = humansAge;
		cout << "Overloaded constructor creates ";
		cout << name << " of " << age << " years" << endl;
	}

private:
	string name;
	int age;

};

int main()
{
	Human firstMan;
	Human firstWoman("Eve", 32);

	return 0;
}
