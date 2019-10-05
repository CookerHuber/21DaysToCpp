//������President����ֹ���ơ���ֵ�Լ��������ʵ��
#include <iostream>
#include<string>
using namespace std;

class President
{
private:
	President() {};//private default constructor
	President(const President&);//private copy constructor
	const President& operator=(const President&);//assignment operatpr

	string name;

public:
	static President& GetInstance()
	{
		//static objects are constructed only once
		static President onlyInstance;
		return onlyInstance;
	}

	string GetName()
	{
		return name;
	}

	void SetName(string InputName)
	{
		name = InputName;
	}
};

int main()
{
	President& onlyPresident = President::GetInstance();
	onlyPresident.SetName("Lincoln");

	//�����Ƿ���Խ�������president
	//President second;
	//President* third = new President();
	//President fourth = onlyPresident;
	//onlyPresident = President::GetInstance();

	cout << "the name of the President is: ";
	cout << President::GetInstance().GetName() << endl;
	return 0;
}