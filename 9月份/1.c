#include<stdio.h>
int main(void)
{
	int a, b, c;

	printf("�������������ֵ\n");
	scanf("%d %d %d", &a, &b, &c);
	a = a > b ? a : b;
	a = a > c ? a : c;
	printf("��ߵ���%d", a);
	return 0;
}
