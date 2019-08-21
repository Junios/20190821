#include <stdio.h>
#include <stdlib.h>

void PrintArray(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

int main()
{
	int n = 20;
	//scanf("%d", &n);

	int* c = (int*)malloc(n * sizeof(int));
	//float* b = (float*)malloc(n * sizeof(float));

	for (int i = 0; i < n; i++)
	{
		c[i] = i + 1;
	}

	//for (int i = 0; i < n; i++)
	//{
	//	printf("%d ", a[i]);
	//}

	//free(a);
	free(c);

	int a[10];
	for (int i = 0; i < 10; i++)
	{
		a[i] = i + 1;
	}

	PrintArray(a, 10);
	PrintArray(c, 20);



	return 0;
}