#include <stdio.h>
#include <string.h>
#define SIZE 40
#define LIM 5
char *s_gets(char * st, int n);
int main(void)
{
	char qwords[LIM][SIZE];//5/40
	char temp[SIZE];//40
	int i = 0;
	printf("拷贝5个q开头的字符串，非q开头直接输出不拷贝。\n");
	while(i < LIM && s_gets(temp, SIZE) != NULL)
	{
		if(temp[0] != 'q')//不是q开头的不进行拷贝处理，而是直接输出
			printf("%s\n",temp);
		else
		{
			strcpy(qwords[i], temp);//q开头的就进行拷贝处理
			i++;
		}
	}
	for(i = 0; i < LIM; i++)
		puts(qwords[i]);
	return 0;
}
char *s_gets(char *st, int n)
{
	char *ret_val;
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
