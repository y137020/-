#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	printf("����һԪ���κ�����׼���̸���ϵ��,Ax^2+Bx+C=0\n");
	scanf_s("%d,%d,%d", &A, &B, &C);
	D =( B * B - 4 * A * C);
	if (D >= 0)
	{
		printf("��ʵ��\n");
	}
	else
	{
		printf("��ʵ��\n");
	}
	return 0;
}//������ԭ��ֻ����Ϊ��������ʱһֱ�����1 4 5������1,4,5�Ͷ���