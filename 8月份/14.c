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
struct namect makeinfo(struct namect info);
void showinfo(struct namect);
char * s_gets(char * st, int n);

int main(void)
{
	struct namect person;

	person = getinfo();
	person = makeinfo(person);
	showinfo(person);

	return 0;
}

struct namect getinfo(void)
{
	struct namect temp;
	printf("Please enter your first name.\n");
	s_gets(temp.fname, NLEN);
	printf("Please enter your last name.\n");
	s_gets(temp.lname, NLEN);
	return temp;	/*返回一个结构*/
}

struct namect makeinfo(struct namect info)
{
	info.letters = strlen(info.fname) + strlen(info.lname);
	return info;
}

void showinfo(struct namect info)
{
	printf("%s %s, your name contains %d letters.\n",
	       info.fname, info.lname, info.letters);
}

char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;

	ret_val = fgets(st, n, stdin);	/*从stdin键盘获取输入到st，获取的数量为n-1个字符*/
	if(ret_val)
	{
		find = strchr(st, '\n');	/*从st至左向右查找字符'\n*/
		if(find)
			*find = '\0';
		else
			while(getchar() != '\n')
				continue;
	}
	return ret_val;
}
