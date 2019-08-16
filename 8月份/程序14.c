#include <stdio.h>//标准输入输出
#include <string.h>//字符串函数
#define SIZE 40//字符串长度
#define TARGSIZE 7//字符串长度
#define LIM 5//字符串个数
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
	printf("st:%#X\n", st);
	printf("ret_val:%#X\n", ret_val);
	return ret_val;
}
int main(void)
{
	char qwords[LIM][TARGSIZE];//5,7
	char temp[SIZE];
	int i = 0;

	printf("输入%d个字符串!\n", LIM);
	while(i < LIM && s_gets(temp, SIZE))
	{
		if(temp[0] != 'q')
			printf("马上输入q开头的字符串!\n");
		else
		{
			strncpy(qwords[i], temp, TARGSIZE - 1);
			qwords[i][TARGSIZE - 1] = '\0';//0-4,0-6     将第7-1=6替换成空字符
			i++;
		}
	}
	for(i = 0; i < LIM; i++)
		puts(qwords[i]);
	return 0;
}

