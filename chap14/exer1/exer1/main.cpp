//��дһ������������˵ĺ�
#define mutiplie(x,y) ((x)*(y))

//��дһ��ģ�壬ʵ����ϰ4�к�Ĺ���
template <typename T> T split(const T& input)
{
	return (input / 5);
}

//ʵ��ģ�庯��swap������������������ֵ
template <typename T> 
void swap(T& x, T& y)
{
	T temp = x;
	x = y;
	y = temp;
}

//���
#define QUARTER(x) ((x)/4)

//��дһ���򵥵�ģ���࣬���洢�������顣����
template <typename Array1Type,typename Array2Type>
class TwoArrays
{
private:
	Array1Type Array1[10];
	Array2Type Array2[10];
public:
	Array1Type& GetArray1Element(int index) { return Array1[index] };
	Array2Type& GetArray2Element(int index) { return Array2[index] };
};