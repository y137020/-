#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	int A = 0;
	while (A < 10000)
	{
		A += 1;
		printf("�Զ��ô������,��%d��",A);
		if (A < 5000)
			printf(",ǰ���\n");
		else
			printf(",����\n");
	}
	return 0;
}