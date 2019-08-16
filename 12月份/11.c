#include <stdio.h>
#define SIZE 6
void hanshu(int ar[], int n);
int main(void)
{
	int ar[SIZE];
	int n;
	puts("请输入5个值：");
	for(n = 0; n < 6; n++)
	{
		scanf("%d", &ar[n]);
	}
	hanshu(ar, n);
	hanshu(ar, n);
	printf("主调函数的数组地址%#X\n", ar);
	return 0;
}
void hanshu(int ar2[], int n)
{
	int i;
	puts("当前得到的结果\n");
	for(i = 0; i < n; i++)
	{
		printf("%d ", ar2[i]);
	}
	putchar('\n');
	ar2[1] = 99;
	printf("主调函数的数组地址%#X\n", ar2);
}
