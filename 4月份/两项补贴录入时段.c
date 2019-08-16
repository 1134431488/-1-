#include <stdio.h>
#define SIZE 7
int main(void)
{
	int n, ch;
	const char *p[SIZE] =
	{
		"星期一：16：00 - 20：00",
		"星期二：12：00 - 16：00",
		"星期三：08：00 - 12：00",
		"星期四：16：00 - 20：00",
		"星期五：12：00 - 16：00",
		"星期六：08：00 - 12：00",
		"星期日： ------全天时段"
	};
	for(n = 0; n < SIZE; n++)
	{
		fputs(*(p + n), stdout);
		putchar('\n');
	}
	printf("\n是否查看网址：请输入数字：\n");
	printf("1.是      2.不了\n");
	while((ch = getchar()) != '\n')
	{
		switch(ch)
		{
			case '1':
				printf("http://210.76.66.108/WorkFlow\n");
				getchar();
				break;
			case '2':
				break;
			default:
				break;
		}
	}
	return 0;
}
