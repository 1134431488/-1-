#include <stdio.h>
static void fun1(void);
static void fun2(void);
int main(void)
{
	int n = 3;
	while(n--)//主要是测试关键字static内部链接，静态存储期
	{
		fun1();
		fun2();
		puts("");//偷个懒的换行符写法
	}

	return 0;
}
static void fun1(void)
{
	static unsigned int temp = 0;//此变量是函数块的全局变量，它仅在此函数中可以使用
	temp++;                      //static作用：将其自动存储类别变成了静态存储类型，其地址存储的值不会在函数消失时释放
	printf("值=%u	地址=%#X\n", temp, &temp);//无符号类型十进制转义字符%u
}
static void fun2(void)
{
	static unsigned int temp = 0;
	temp++;
	printf("值=%u	地址=%#X\n", temp, &temp);
}
