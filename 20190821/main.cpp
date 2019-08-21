#include <stdio.h>


//데이터타입*  테이터타입형 포인터 변수 선언
//int* int형 포인터 변수 선언(int형 변수의 주소를 기억 공간)
//*변수 -> 포인터 변수가지고 있는 위치(메모리주소)의 값을 찾아서 사용
//변수 * 변수 = 곱하기

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