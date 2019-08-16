#include <stdio.h>
#include <string.h>
#define ANSWER "Grant"
#define SIZE 40
char *s_gets(char *, int);

int main(void)
{
	char try[SIZE];
	
	puts("Who is buried in Grant's tomb?");
	s_gets(try, SIZE);
    while(strcmp(try, ANSWER))//返回值非零则真，为真则不相等
    {
    	puts("No, that's wrong. Try again.");
    	s_gets(try, SIZE);//循环获取字符串再比较
	}
	puts("That's right!");//为0循环则假，那么为0即相等
	return 0;
}

char *s_gets(char *st, int n)
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
	return ret_val;//ret_val如果有值则与st地址相等
}

