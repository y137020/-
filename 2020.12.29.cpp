#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int f(int number)
{
	int n = number - 1;
	int m = number;
	while (n > 0)
	{
		m = m * n;
		n -= 1;
	}
		return m;
}//阶乘计算函数
int main()
{
	int a = 0;
	int	b = 0;
	scanf_s("%d", &a);
	b = f(a);
	printf("%d的阶乘结果为：%d",a, b);
	return 0;
}
//计算阶乘的计算器