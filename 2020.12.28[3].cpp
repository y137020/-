#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int MAX(int number1, int number2)
{
	if (number1 >= number2)
	{
		return number1;
	}
	else
	{
		return number2;
	}
}
//自定义大小比较函数

int main()
{
	int A = 0;
	int B = 0;
	int max = 0;
	scanf_s("%d%d", &A, &B);
	max = MAX(A, B);
	printf("%d", max);
	return 0;
}