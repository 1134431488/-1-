#include <stdio.h>
void report_count(void);
void accumulate(int k);
int count = 0;	//文件作用域，外部链接，静态存储期

int main(void)
{
	int value;	//自动变量
	register int i;	//寄存器变量

	printf("Enter a positive integer (0 to quit):");	//输入一个正整数，0结束 
	while(scanf("%d", &value) == 1 && value > 0)	//scanf()函数自动处理空白字符，scanf()内部有一个循环会忽略空白字符 
	{
		++count;	//使用文件作用域变量
		for(i = value; i >= 0; i--)	//例如value是5，则传入5 4 3 2 1 0 且依次相加等于15 
		{
			accumulate(i);
		}
		
		printf("Enter a positive integer (0 to quit):");
	}
	report_count();
	
	return 0;
}

void report_count(void)
{
	printf("Loop executed %d times\n", count);
}
