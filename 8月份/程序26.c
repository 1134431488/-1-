#include <stdio.h>
int main(void)
{
	int a = 10;
	int b = 12;
	int  * const p = &a; //const在*符号前其值不可修改，在*符号后其地址不可修改
	p = &b;//此处运行发生错误，其地址为只读不可被赋值修改
	printf("%d %d\n", *p, a);
	
	return 0;
}
