//�������ĸ�λִ��NOT\AND\OR\XOR���㣬��ʾ��λ������÷�
#include<iostream>
#include<bitset>
using namespace std;

int main()
{
	cout << "enter a number (0-255): ";
	unsigned short inputNum = 0;//��ʼ��
	cin >> inputNum;

	bitset<8> inputBits = (inputNum);
	cout << inputNum << " in binary is " << inputBits << endl;

	bitset<8> bitwiseNOT = (~inputNum);
	cout << "logical NOT ~" << endl;
	cout << "~" << inputBits << " = " << bitwiseNOT << endl;


}