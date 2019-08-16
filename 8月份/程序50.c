#include <stdio.h>
int main(void)
{
	int a, max, i;
	a = max = i = 0;//初始化为0
	printf("开始输入数字:\n");
	do
	{
		if(a < max && a != -1)//a小于max
			max = a;//那么就得到最小值
	}
	while(scanf("%d", &a), a != -1);
	printf("最小值是%d", max);
	
	return 0;
}
