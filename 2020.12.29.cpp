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
}//�׳˼��㺯��
int main()
{
	int a = 0;
	int	b = 0;
	scanf_s("%d", &a);
	b = f(a);
	printf("%d�Ľ׳˽��Ϊ��%d",a, b);
	return 0;
}
//����׳˵ļ�����