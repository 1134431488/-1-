#include <stdio.h>
#include <string.h>
char * s_gets(char * st, int n);
#define MAXTITL 41
#define MAXAUTL 31

struct book
{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};	/*结构模版结束*/

int main(void)
{
	struct book library;
	printf("Please enter the book titile.\n");
	s_gets(library.title, MAXTITL);	/*访问title部分*/
	printf("Now enter the author.\n");
	s_gets(library.author, MAXAUTL);
	printf("Now enter the value.\n");
	scanf("%f", &library.value);
	printf("title:%s author:%s value:%d\n", library.title, library.author, library.value);
	printf("Done!\n");
	return 0;
}

char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;

	ret_val = fgets(st, n, stdin);
	if(ret_val)
	{
		find = strchr(st, '\n');
		if(find)
			*find = '\0';
		else
			while(getchar() != '\n')
				continue;	//处理输入行中剩余字符
	}
	return ret_val;
}
