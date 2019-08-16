#include <stdio.h>
void report_count();    //函数原型
void accumulate(int k); //函数原型
int count = 0;  //文件作用域，外部链接

int main(void)
{
	int value;  //自动变量
	register int i; //寄存器变量

	printf("输入一个正整数(0退出): ");
	while(scanf("%d", &value) == 1 && value > 0)
	{
		++count;    //使用文件作用域变量
		for(i = value; i >= 0; i--)		//i = value，把自动变量的值赋值给寄存器变量，请求最快速度访问该变量
			accumulate(i);
		printf("输入一个正整数(0退出): ");
	}
	report_count();

	return 0;
}
void report_count()
{
	printf("循环执行%d次\n", count);
}
