// ray4.cpp : �������̨Ӧ�ó������ڵ㡣
//����int��̬���鲢��̬�ز���ֵ

#include "stdafx.h"
#include<vector>
#include<iostream>
using namespace std;

int main()
{
	vector<int>dynArray(3);//���嶯̬����
	dynArray[0] = 356;
	dynArray[1] = 231;
	dynArray[2] = 23;

	cout << "������Ԫ�صĸ���Ϊ��" << dynArray.size() << endl;

	cout << "����һ����ֵ�����뵽����ĩβ��" << endl;
	int newValue = 0;
	cin >> newValue;
	dynArray.push_back(newValue);

	cout << "������Ԫ�صĸ���Ϊ��" << dynArray.size() << endl;
	cout << "�������һ��Ԫ��Ϊ��" << dynArray[dynArray.size()-1] << endl;
    return 0;
}

