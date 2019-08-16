#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SLEN 81
struct namect
{
	char * fname;
	char * lname;
	int letters;
};

void getinfo(struct namect *);	/* 分配memory */
void makeinfo(struct namect *);
void showinfo(const struct namect *);
void cleanup(struct namect *); 	/* 释放memory */
char * s_gets(char * st, int n);

int main(void)
{
	struct namect person;

	getinfo(&person);
	makeinfo(&person);
	showinfo(&person);
	cleanup(&person);

	return 0;
}

void getinfo(struct namect * pst)	/* 指向结构体地址的结构体指针 */
{
	char temp[SLEN];
	printf("Please enter your first name.\n");	/* 请输入您的名 */
	s_gets(temp, SLEN);
	// 分配内存以储存名
	pst->fname = (char *) malloc(strlen(temp) + 1);	/* temp字符长度，空字符无长度。+ 1预留一个大小给空字符结尾 */
	// 把名拷贝到动态分配的内存中
	strcpy(pst->fname, temp);
	printf("Please enter your last name.\n"); /* 请输入您的姓 */
	s_gets(temp, SLEN);
	pst->lname = (char *) malloc(strlen(temp) + 1);	/* 分配内存储存姓 */
	strcpy(pst->lname, temp);	/* 拷贝temp的数据对象给动态分配的地址空间存储 */
}

void makeinfo(struct namect * pst)
{
	pst->letters = strlen(pst->fname) +
	               strlen(pst->lname);
}

void showinfo(const struct namect * pst)
{
	printf("%s %s, your name contains %d letters.\n",
	       pst->fname, pst->lname, pst->letters);	/* 您的名字包含%d字母 */
}

void cleanup(struct namect * pst)
{
	free(pst->fname);
	free(pst->lname);
}

char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;

	ret_val = fgets(st, n, stdin);	/* 从键盘流获取输入 */
	if(ret_val != NULL)
	{
		find = strchr(st, '\n');	/* 寻找换行符 */
		if(find != NULL)
			*find = '\0';
		else
			while(getchar() != '\n')
				continue;
	}
	return ret_val;
}
