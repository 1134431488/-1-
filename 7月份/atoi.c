#include <stdio.h>
int main(void)
{
	char p[4] = "666";
	int n;
	n = atoi(p);//将字符串转化为整数
	printf("%d\n", n);
	return 0;
}
