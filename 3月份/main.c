#include <stdio.h>
void report_count();//报告数量
void accumulate(int k);	//积累
int count = 0;	/*file scope extern linkage*/

int main(void)
{
	int value;	/*自动变量*/
	register int i;	/*寄存器变量*/

	printf("输入一个正整数, 0退出:");
	while(scanf("%d", &value) == 1 && value > 0)
	{
		++count;	//Use file scope variable
		for(i = value; i >= 0; i--)
			accumulate(i);
		printf("输入一个正整数, 0退出:");
	}
	report_count();
	return 0;
}

void report_count()
{
	printf("count:%d\n", count);
}
