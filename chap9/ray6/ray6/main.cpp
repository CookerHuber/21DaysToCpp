//���ܴ�Ĭ��ֵ�Ĳ�����Ĭ�Ϲ��캯������ʹ�ó�ʼ���б������ó�Ա
#include <iostream>
#include<string>
using namespace std;

class Human
{
public:
	Human(string humansName = "Adam", int humansAge = 35)
		:name(humansName), age(humansAge)
	{
		cout << "Constructed a human called " << name;
		cout << ", " << age << " years old" << endl;
	}
	//~Human();

private:
	int age;
	string name;
};

int main()
{
	Human adam;
	Human eve("Eve", 29);

	return 0;
}