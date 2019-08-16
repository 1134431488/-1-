#include <stdio.h>
#include <string.h>
char * s_gets(char * st, int n);
#define MAXTITL 41	/*书名*/
#define MAXAUTL 31	/*作者姓名*/

struct book  	/*结构模板：标记是book*/
{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
	/*结构模板结束*/
};
int main(void)
{
	struct book library;

	printf("Please enter the book title.\n");
	s_gets(library.title, MAXTITL);
	printf("Now enter the author.\n");
	s_gets(library.author, MAXAUTL);
	printf("Now enter the value.\n");
	scanf("%f", &library.value);
	printf("%s %s %f", library.title, library.author, library.value);
	printf("Done.\n");
	return 0;
}
char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;
	ret_val = fgets(st, n, stdin);	/*从输入流获取字符->输入流缓冲区->程序proceduer*/
	if(ret_val)
	{
		find = strchr(st, '\n');	//查找换行符
		if(find)
		{
			*find = '\0';
		}
		else
			while(getchar() != '\n')
				continue;
	}
	return ret_val;
}
