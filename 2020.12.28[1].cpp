#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int A = 0;
	while (A < 10000)
	{
		A += 1;
		printf("自动敲代码测试,第%d行",A);
		if (A < 5000)
			printf(",前半段\n");
		else
			printf(",后半段\n");
	}
	return 0;
}
