#include <stdio.h>


//������Ÿ��*  ������Ÿ���� ������ ���� ����
//int* int�� ������ ���� ����(int�� ������ �ּҸ� ��� ����)
//*���� -> ������ ���������� �ִ� ��ġ(�޸��ּ�)�� ���� ã�Ƽ� ���
//���� * ���� = ���ϱ�

template<typename T>
void swap(T* pa, T* pb)
{
	T temp = *pa;
	*pa = *pb;
	*pb = temp;
}


int main()
{
	int a = 3;
	int b = 4;
	swap<int>(&a, &b);

	float c = 3.4f;
	float d = 6.7f;
	swap<float>(&c, &d);

	printf("%f %f", c, d);

	return 0;
}