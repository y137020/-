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
	if ((B * B - 4 * A * C) >= 0)
	{
		printf("��ʵ��\n");
	}
	else
	{
		printf("��ʵ��\n");
	}
	D = B * B - 4 * A * C;
	printf("%d", D);
	return 0;
}//�ж�һԪ���κ����Ƿ���ʵ��
//x^2+4x+5=0
//����̫æûʱ���ˣ���������Բ��ܴﵽĿ�ģ��������޸�