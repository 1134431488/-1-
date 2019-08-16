#include <stdio.h>
#include <string.h>
#define ANSWER "Grant"
#define SIZE 40
char * s_gets(char * st, int n);

int main(void)
{
	char try[SIZE];
	puts("Who is buried in Greant's tomb?");
	s_gets(try, SIZE);
	while(strcmp(try, ANSWER) != 0)	//字符串比较不相等
	{
		puts("No, that's wrong. Try again.");	//不,那是错的。再试一次。
		s_gets(try, SIZE);	/*获取新的字符串*/
	}
	puts("Tant's right!");

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
		else if(st[i] == '\0')
			while(getchar() != '\n')
				continue;
	}
	return ret_val;
}
