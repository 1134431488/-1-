#include<stdio.h>
long f(int);
long r(int);
int main(void)
{
	int n, a;
	printf("请输入大于0小于17的数字:");
	while(scanf("%d", &n) ==1)
	{
		if(n <=0 )
			printf("请输入正确的数值！");
		else
		{
			a = f(n);
			printf("\n循环中n的正阶乘值为：%d\n",a);
			a = r(n);
			printf("尾递归n的正阶乘值为：%d\n\n",a);
			printf("请输入大于0小于12的数字:");
		}
	}
	return 0;
}
long f(int n)
{
	long a;
	for(a = 1; n > 1; n--)
		a *= n;

	return a;
}
long r(int n)
{
	long a;
	if(n > 0)
		a = n * r(n - 1);
	else
		a = 1;

	return a;
}
