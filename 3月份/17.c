#include <stdio.h>
static int a = 100;		//以static存储类别说明符声明的变量或函数，属于模块私有。这样做避免名称冲突的问题 
static void fun(void); 
int main(void)
{
	extern int a;
	printf("main() a = %d\n", a);
	fun();
}

static void fun(void)
{
	static int a = 50;
	printf("fun() a = %d\n", a);
}
