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
	D =( B * B - 4 * A * C);
	if (D >= 0)
	{
		printf("有实根\n");
	}
	else
	{
		printf("无实根\n");
	}
	return 0;
}//。。。原来只是因为输入数据时一直输的是1 4 5，输入1,4,5就对了