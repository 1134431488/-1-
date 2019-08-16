#include <stdio.h>
#include <string.h>
char * s_gets(char * st, int n);
#define MAXTITL 41	/*书名的最大长度 + 1	*/
#define MAXAUTL	31	/*作者姓名的最大长度 + 1	*/

struct book  	/*结构模板：标记是book*/
{
	char title[MAXTITL];	/*书名*/
	char author[MAXAUTL];	/*作家*/
	float value;			/*价值*/
	/*结构模板结束*/
};

int main(void)
{
	struct book library;	/*把library声明为一个book类型的变量*/

	printf("Please enter the book title.\n");	/*请输入书名*/
	s_gets(library.title, MAXTITL);	/*访问title部分*/

	printf("Now enter the author.\n");	/*现在输入作者*/
	s_gets(library.author, MAXAUTL);

	printf("Now enter the value.\n");
	scanf("%f", &library.value);

	printf("%s by %s: $%.2f\n", library.title,
	       library.author, library.value);
	printf("%s: \"%s\" ($%.2f)\n", library.author,
	       library.title, library.value);
	printf("Done.\n");

	return 0;
}

char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;

	ret_val = fgets(st, n, stdin);
	if(ret_val)
	{
		find = strchr(st, '\n');	/*find 换行符（a new line）*/
		if(find)
			*find = '\0';
		else
			while(getchar() != '\n')
				continue;	/*处理输入行中剩余的字符*/
	}
	return ret_val;
}
