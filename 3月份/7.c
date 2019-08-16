#include <stdio.h>
#define f 100000	//分割次数上限
int main(void)
{
	int i, a, c;  	//c = 分割份数，a = 待分割的值
	do
	{
		puts("输入待分割的*数值(int a)");
		fscanf(stdin, "%d", &a);
		puts("输入待分割的*份值(int c)");
		fscanf(stdin, "%d", &c);
		for(i = 1; i <= f && ( i * c) < a; i++)
		{
			printf("a-i*3=%2d ||| ", a - i * c);    //数值分割成3份，每份占i大小
			printf("i=%d i*%d份=%d份\n", i, c, i * c);
		}
		putchar('\n');
		if(a % i != 0)  //处理值为小数的份数，由于i只能是整数，这里做一下输出的特殊处理
		{
			i = i - 1;	//当有余数的时候，i减1
			printf("%d(a)被分割成%d(c)份，每份约占%d(i)\n", a, c, i);	//截断小数部分
		}
		else    		//如果没有余数，i不需要减1
			printf("%d(a)被分割成%d(c)份，每份占%d(i)\n", a, c, i);
	} while(getc(stdin) != '#');
	return 0;
}
