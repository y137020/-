#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int A = 0;
	printf("背了普地吗？\n");
	printf("背了打1，没背打0：\n");
	scanf_s("%d", &A);
	while (A>=0&&A<=1)
	{
		if (A == 1)
			printf("你普地过了\n");
		else
			printf("你必不过\n");
		return 0;
	}
	while (A < 0 || A>1)
	{
		printf("说了打1/0，重来\n");
		scanf_s("%d", &A);
		while (A >= 0 && A <= 1)
		{
			if (A == 1)
				printf("你普地过了\n");
			else
				printf("你必不过\n");
			return 0;
		}
		while (A < 0 || A>1)
		{
			printf("傻逼");
			return 0;
		}
	}
	return 0;
}
