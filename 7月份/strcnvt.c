#include <stdio.h>
#include <stdlib.h>
#define LIM 30
char * s_gets(char * st, int n);

int main(void)
{
	char number[LIM];//接受一个字符串
	char * end;		 //该指针标识输入数字结束字符的地址
	long value;		 //接受一个长整数，可将不同进制的值转换成十进制的长整数

	puts("Enter a number (empty line to quit):");
	while(s_gets(number, LIM) && number[0] != '\0')
	{
		value = strtol(number, &end, 10);
		printf("十进制：long:%ld    string:%s    int:%d    %c\n", value, end, *end, *end);
		value = strtol(number, &end, 16);
		printf("十六进制：long:%ld    string:%s    int:%d    %c\n", value, end, *end, *end);
		puts("Next number:");
	}
	puts("Bye!\n");
	return 0;
}
char * s_gets(char * st, int n)
{
	char * ret_val;
	int i = 0;
	
	ret_val = fgets(st, n, stdin);
	if(ret_val)
	{
		while(st[i] != '\n' && st[i] != '\0')
		i++;
		if(st[i] == '\n')
			st[i] = '\0';
			else
			while(getchar() != '\n')
			continue;
	}
	return ret_val;
}
