//ʹ��ƫ������������������͵ݼ�ָ��
#include <iostream>
using namespace std;

int main()
{
	cout << "����������ٸ����ݣ�";
	int numEnter = 0;
	cin >> numEnter;

	int* pointsToInts = new int[numEnter];
	cout << "allocated for " << numEnter << " integers" << endl;
	//����ƫ����������ָ���������
	for (int couter = 0; couter < numEnter; ++couter)
	{
		cout << "enter number " << couter << ": ";
		cin >> *(pointsToInts + couter);
	}

	cout << "displaying all numbers entered: " << endl;
	//���������������ָ���������
	for (int counter = 0; counter < numEnter; ++counter)
	{
		cout << *(pointsToInts++) << " ";
	}
	cout << endl;

	//24�еĴ����pointsToInts�������޸ģ�����ڶ��·����ڴ����delete����ʱ����Ҫ��ָ������Ļ�ԭ������ʱ�ĵ�ַ
	pointsToInts -= numEnter;

	delete[] pointsToInts;
}