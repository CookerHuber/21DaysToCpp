//һ�����޵�ģ���࣬��ʹ��static_assert�������int����ʵ����ʱ��������
#include<iostream>
using namespace std;

template <typename T>
class EverythingButInt
{
public:
	EverythingButInt()
	{
		static_assert(sizeof(T) != sizeof(int), "No int please!");
	}
};

int main()
{
	EverythingButInt<int> test;
	return 0;
}