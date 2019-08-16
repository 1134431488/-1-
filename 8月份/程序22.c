#include <stdio.h>
#include <string.h>
int main(void)
{
	char s1[] = "a565";
	char s2[] = "4565";
	int n;
	printf("%#X\n", strpbrk(s1, s2));//结果返回s1元素'5'的地址
	for(n = 0; n < 4; n++)
	{
		printf("%#X\n",&s1[n]);//结果返回s1元素'5'的地址与检验函数返回值相等
	}
	return 0;
 }
