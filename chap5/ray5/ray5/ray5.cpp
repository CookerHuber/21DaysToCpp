//��if�����ʹ���߼�not��and�����������������
#include<iostream>
using namespace std;

int main()
{
	cout << "use boolean values(0/1) to answer the questions" << endl;
	cout << "is it raining? ";
	bool isRaining = false;//��ʼ��
	cin >> isRaining;

	cout << "do you have buses on the streets? ";
	bool busesPly = false;
	cin >> busesPly;

	//conditional statement uses logical AND and NOT
	if (isRaining && !busesPly)
		cout << "you cannot go to work" << endl;
	else
		cout << "you can go to work" << endl;

	if (isRaining&&busesPly)
		cout << "take an umbrella" << endl;

	if ((!isRaining) && busesPly)
		cout << "enjoy the sun and have a nice day" << endl;
	return 0;
}