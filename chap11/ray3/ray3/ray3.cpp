// ray3.cpp : �������̨Ӧ�ó������ڵ㡣
// �ں�����ͨ������ָ����������delete

#include "stdafx.h"
#include <iostream>
using namespace std;

class Fish
{
public:
	Fish()
	{
		cout << "construted Fish" << endl;
	}
	~Fish()
	{
		cout << "destroyed Fish" << endl;
	}
};

class Tuna :public Fish
{
public:
	Tuna()
	{
		cout << "constructed Tuna" << endl;
	}
	~Tuna()
	{
		cout << "destroyed Tuna" << endl;
	}
};

void deleteFishMemory(Fish* pFish)
{
	delete pFish;
}

int main()
{
	cout << "Allocating a Tuna on the free store:" << endl;
	Tuna* pTuna = new Tuna;
	cout << "Deleting the Tuna:" << endl;
	deleteFishMemory(pTuna);

	cout << "Instantiating a Tuna on the stack:" << endl;
	Tuna myDinner;
	cout << "Automatic destruction as it goes out of scope: " << endl;
    return 0;
}

