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
};	//声明一个结构标记，以分号结构，各成员以分号分隔

int main(void)
{
	struct book library;	/*把library声明为一个book类型的变量*/

	printf("Please enter the book title.\n");
	s_gets(library.title, MAXTITL);	/*访问title部分*/
	printf("Now enter the author.\n");
	s_gets(library.author, MAXAUTL);
	printf("Now enter the value.\n");
	scanf("%f", &library.value);

	printf("%s %s %f\n", library.author, library.title, library.value);
	printf("Done!\n");

	return 0;
}

char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;

	ret_val = fgets(st, n, stdin);	//从标准输入获取输入流
	if(ret_val)
	{
		find = strchr(st, '\n');
		if(find)
			*find = '\0';
		else
			while(getchar() != '\n')
				continue;	//处理输入行中剩余的字符
	}
	return ret_val;
}
