#include <stdio.h>
#include <string.h>

#define NLEN 30
struct namect
{
	char fname[NLEN];
	char lname[NLEN];
	int letters;
};

struct namect getinfo(void);
struct namect makeinfo(struct namect);
void showinfo(struct namect);
char * s_gets(char * st, int n);

int main(void)
{
	struct namect person;

	person = getinfo();			/* 得到函数返回结构体值 */
	person = makeinfo(person);	/* 传入结构体副本，函数返回处理后的结构体 */
	showinfo(person);			/* 传入结构体副本 */

	return 0;
}
struct namect getinfo(void)
{
	struct namect temp;
	printf("Please enter your first name.\n");
	s_gets(temp.fname, NLEN);
	printf("Please enter your last name.\n");
	s_gets(temp.lname, NLEN);

	return temp;				/* 返回一个结构体 */
}

struct namect makeinfo(struct namect info)
{
	info.letters = strlen(info.fname) + strlen(info.lname);	/* 名字1和名字2的字符长度，空字符没有长度不计算在内 */
	return info; 				/* 返回一个结构体 */
}

void showinfo(struct namect info)
{
	printf("%s %s，your name contains %d letters.\n",		/* 您的名字包含%d个字母 */
	       info.fname, info.lname, info.letters);
}
char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;

	ret_val = fgets(st, n , stdin);
	if(ret_val)
	{
		find = strchr(st, '\n');
		if(find)
			*find = '\0';
		else
			while(getchar() != '\n')
				continue;		/*处理(舍去)输入流中的剩余字符*/
	}
	return ret_val;
}
