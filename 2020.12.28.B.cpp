#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	int A = 0;
	printf("�����յ���\n");
	printf("���˴�1��û����0��\n");
	scanf_s("%d", &A);
	while (A>=0&&A<=1)
	{
		if (A == 1)
			printf("���յع���\n");
		else
			printf("��ز���\n");
		return 0;
	}
	while (A < 0 || A>1)
	{
		printf("˵�˴�1/0������\n");
		scanf_s("%d", &A);
		while (A >= 0 && A <= 1)
		{
			if (A == 1)
				printf("���յع���\n");
			else
				printf("��ز���\n");
			return 0;
		}
		while (A < 0 || A>1)
		{
			printf("ɵ��");
			return 0;
		}
	}
	return 0;
}