//�ڼ���Բ����ĺ�����ʹ�ùؼ���const
#include <iostream>
using namespace std;

void CalcArea(const double* const ptrPi,//const pointer to const data
	const double* const ptrRadius,
	double* const ptrArea)//can change data pointed to
{
	//������֮ǰ���ָ�������
	if (ptrPi&&ptrRadius&&ptrArea)
		*ptrArea = (*ptrPi)*(*ptrRadius)*(*ptrRadius);
}

int main()
{
	const double pi = 3.1416;

	cout << "enter radius of circle: ";
	double radius = 0;
	cin >> radius;

	double area = 0;
	CalcArea(&pi, &radius, &area);

	cout << "area is = " << area << endl;

	return 0;
}