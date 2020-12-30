#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	printf("输入一元二次函数标准方程各项系数,Ax^2+Bx+C=0\n");
	scanf_s("%d,%d,%d", &A, &B, &C);
	if ((B * B - 4 * A * C) >= 0)
	{
		printf("有实根\n");
	}
	else
	{
		printf("无实根\n");
	}
	D = B * B - 4 * A * C;
	printf("%d", D);
	return 0;
}//判断一元二次函数是否有实根
//x^2+4x+5=0
//今天太忙没时间了，这个函数仍不能达到目的，明天再修改