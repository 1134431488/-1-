#include <stdio.h>
#include <string.h>
char * s_gets(char * st, int n);
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100	/*书籍的最大数量*/
struct book
{
	char 	title[MAXTITL];
	char 	author[MAXAUTL];
	float 	value;
};
int main(void)
{
	struct book library[MAXBKS];	/*book类型的结构数组*/
	int count = 0;
	int index;

	puts("输入书名");
	while(count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0')
	{
		puts("输入作者");
		s_gets(library[count].author, MAXAUTL);
		puts("输入价格");
		scanf("%f", &library[count++].value);
		while(getchar() != '\n')
			continue;	/*清理标准stdin输入行*/
		if(count < MAXBKS)
			puts("输入书名");
	}
	if(count > 0)	//如果这个结构数组内有内容，则输出这个结构数组的内容
	{
		for(index = 0; index < count; index++)
			printf("%s %s %.2f\n",
			       library[index].title,
			       library[index].author,
			       library[index].value);
	}
	else
		puts("未获取到任何书籍的信息！");

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
				continue;
	}

	return ret_val;
}
