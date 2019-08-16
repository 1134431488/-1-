#include <stdio.h>
#include <string.h>
char * s_gets(char * st, int n);
#define MAXTITL 40
#define MAXAUTL	40
#define MAXBKS	100	/*书籍的最大数量*/

struct book
{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

int main(void)
{
	struct book library [MAXBKS];	/*book类型结构的数组*/
	int count = 0;	/*计数*/
	int index;	/*索引*/

	printf("请输入书名.\n");
	printf("行首开始处按下[enter]键停止。\n");
	printf("library[count].title=%#X"
	       "\n&library[count].title=%#X\n", library[count].title,
	       &library[count].title);

	while(count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL)
	{
		if(library[count].title[0] == '\0')
			break;

		printf("现在输入作者.\n");
		s_gets(library[count].author, MAXAUTL);
		printf("Now enter the value.\n");
		scanf("%f", &library[count++].value);	/*count尾递增*/

		while(getchar() != '\n')
			continue;	/*clear标准输入流字符*/

		if(count < MAXBKS)
			printf("输入下一个标题.\n");
	}

	if(count > 0)
	{
		printf("这是你的书单:\n");
		for(index = 0; index < count; index++)
			printf("[%s] by [%s]: $[%.2f]\n", library[index].title,
			       library[index].author, library[index].value);
	}
	else
		printf("没有书吗?太糟糕了.\n");

	return 0;
}

char * s_gets(char *st, int n)
{
	char * ret_val;
	char * find;

	ret_val = fgets(st, n, stdin);
	if(ret_val)
	{
		find = strchr(st, '\n');	/*查找换行符*/

		if(find)	/*如果地址不是NULL*/
			*find = '\0';	/*在此处放置一个空字符*/
		else
			while(getchar() != '\n')
				continue;	/*处理输入行剩余的字符*/
	}

	printf("title = %s\n", st);

	return ret_val;
}
