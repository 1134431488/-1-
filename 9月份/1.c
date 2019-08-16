#include<stdio.h>
int main(void)
{
	int a, b, c;

	printf("请输入三个身高值\n");
	scanf("%d %d %d", &a, &b, &c);
	a = a > b ? a : b;
	a = a > c ? a : c;
	printf("最高的是%d", a);
	return 0;
}
