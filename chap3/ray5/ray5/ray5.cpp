//ʹ��ö����ָʾ������λ
#include<iostream>
using namespace std;
enum CardinalDirections
{
	//�ĸ���λ����Ϊö�ٳ�����������һ�ε�����
	North = 25,
	South,
	East,
	West
};

int main()
{
	cout << "Displaying directions and their symbolic values" << endl;
	cout << "North: " << North << endl;
	cout << "South: " << South << endl;
	cout << "East: " << East << endl;
	cout << "West: " << West << endl;

	CardinalDirections windDirection = South;//��windDirection����ΪCardinalDirections���ͣ���ʼֵΪSouth.
	cout << "Variable windDirection = " << windDirection << endl;
	return 0;
}