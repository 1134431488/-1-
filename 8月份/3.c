#include <stdio.h>

int a[111000];         //客户乘坐n公里费用
int v[110],n;           //直接乘坐n公里费用

int main(void)
{
	for(int i=1; i<=10; i++)
		scanf("%d",&v[i]);

	scanf("%d\n",&n)	;                     //定义输入

	for(int i=1; i<=n; i++)
		a[i] = 9999999;

	a[0] = 0;

	for(int i = 1; i <= n; i++)                  //n公里
		for(int j = 1; j <= 10; j++)                    //10公里
			if(i >= j)
				a[i] = min(a[i], v[j] + a[i-j]);

	printf("%d\n", a[n])	;					  //判断是否10公里
	
	return 0;
}
