//��дһ���������û�����Բ�İ뾶����������������ܳ�
#include <iostream>
using namespace std;
int main()
{	
	const double pi = 3.14;
	cout << "enter the radius: ";
	double radius = 0;
	cin >> radius;

	double circle = 0, square = 0;
	circle = 2 * pi*radius;
	square = pi*radius*radius;

	cout << "circle = " << circle << endl;
	cout << "square = " << square << endl;
	return 0;
}