//ǰ׺������ͺ�׺������Ĳ��
#include<iostream>
using namespace std;

int main()
{
	int startValue = 101;//��ʼ��
	cout << "start value of integer being operated: " << endl;

	int postfixIncrement = startValue++;//��׺
	cout << "result of postfix increment= " << postfixIncrement << endl;
	cout << "after postfix increment,startValue= " << startValue << endl;

	startValue = 101;//����
	int prefixIncrement = ++startValue;
	cout << "result of prefix increment= " << prefixIncrement << endl;
	cout << "after prefix increment,startValue= " << startValue << endl;

	return 0;
}