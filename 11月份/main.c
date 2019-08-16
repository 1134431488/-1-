#include <stdio.h>
static int a = 1;//外部链接变量
extern int b;//引用式声明外部链接变量
extern float c;//引用式声明外部链接变量
extern double d;//引用式声明外部链接变量
extern char e;//引用式声明外部链接变量

int main(void)
{
	printf("文件1的外部变量a地址：%X\n", &a);
	printf("文件2的外部变量b地址：%X\n", &b);
	printf("文件2的外部变量c地址：%X\n", &c);
	printf("文件2的外部变量d地址：%X\n", &d);
	printf("文件2的外部变量e地址：%X\n", &e);
	return 0;
}
