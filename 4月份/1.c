#include <stdio.h>
#include <string.h>
char * s_gets(char *st, int n);
#define MAXTITL 41 	//标题 
#define MAXAUTL 31	//作家 

struct book
{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
}; /*结构模板结束*/

int main(void)
{
	struct book library;	/*library 声明为一个book类型的变量*/
	printf("Please enter the book title.\n");
	s_gets(library.title, MAXTITL);	/*访问title部分*/
	printf("Now enter the author.\n");
	s_gets(library.author, MAXAUTL);
	printf("Now enter the value.\n");
	scanf("%f", &library.value);
	printf("%s by %s : $%.2f\n", library.title,
	       library.author, library.value);
	printf("%s:\"%s\"($%.2f)\n", library.author,
	       library.title, library.value);
	printf("Done.\n");

	return 0;
}

char *s_gets(char * st, int n)/*获取一个字符串给st大小为n，返回st。实际上ret_val等价于st*/
{
	char * ret_val;
	char *find;

	ret_val = fgets(st, n, stdin);	/*从键盘输入流中获取n-1个字符指针数据，如果成功返回st否则返回NULL*/
	if(ret_val)
	{
		find = strchr(st, '\n');	/*查找换行符*/
		if(find)	/*如果地址不是NULL*/
			*find = '\0'; 	/*修改换行符为空字符*/
		else
			while(getchar() != '\n')
				continue;	/*处理输入行中剩余的字符*/
	}
	return ret_val;
}
