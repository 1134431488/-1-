#include <stdio.h>
int main(void)
{
	int u[5] = {};//数组初始化的另一种方式
	int n;
    int *p1 = &u[1];
    int *p2 = &u[0];
    printf("%d " , p1 - p2);
	for(n = 0; n < 5; n++)
		printf("%d ", u[n]);
	printf("\n\n%#X %#X", &p1 + 1, &p1);//从结果分析 + 1实际上是加了8字节，此地址在64位下的长度是8字节长度
	printf("\n\n%#X %#X", p1 + 1, p1);//从结果分析 + 1实际上是加了4字节，他指向int类型的字节长度
	
	printf("\n%s\n", p1 - 1 > p1 ?"大于p1" : "小于p1");
	return 0;
}
