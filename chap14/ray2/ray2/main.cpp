//ʹ��#define��д�꺯��
//ʹ�ü���ƽ��ֵ/Բ���/��Сֵ�����ֵ�ĺ꺯��
#include<iostream>
#include<string>
using namespace std;

#define SQUARE(x) ((x)*(x))
#define PI 3.1416
#define AREA_CIRCLE(r) ((PI)*(r)*(r))
#define MAX(a,b) (((a)>(b))?(a):(b))
#define MIN(a,b) (((a)<(b))?(a):(b))

int main()
{
	cout << "Enter an integer: ";
	int num = 0;
	cin >> num;

	cout << "SQUARE(" << num << ")= " << SQUARE(num) << endl;
	cout << "AREA of a circle with radius " << num << " is: ";
	cout << AREA_CIRCLE(num) << endl;

	cout << "enter another integer: ";
	int num2 = 0;
	cin >> num2;

	cout << "MAX(" << num << ", " << num2 << ") =";
	cout << MAX(num, num2) << endl;
	cout << "MIN(" << num << ". " << num2 << ") =";
	cout << MIN(num, num2) << endl;

	return 0;
}

//�겻�����������ͣ���˿��ܻ��������
//ͨ��ʹ�����ţ�ʹ����벻����������ȼ���Ӱ��
//