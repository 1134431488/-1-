#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LIMIT 81
void ToUpper(char *);	// 小写字母转换为大写字符
int PunctCount(const char *);	//标点符号计数

int main(void)
{
	char line[LIMIT];	//字符串
	char * find;		//指向字符串指针

	puts("Please enter a line:");
	fgets(line, LIMIT, stdin);	//从输入流获取输入给line，获取输入需要参数1有储存空间
	find = strchr(line, '\n');	//查找换行符并返回它的位置
	if(find)	//如果find 不等于NULL
		*find = '\0';	//修改换行符为空字符
	ToUpper(line);		//传入数组名
	puts(line);			//输出修改后了字符串
	printf("That line has %d punctuation characters.\n", PunctCount(line));	//传入数组名

	return 0;
}

void ToUpper(char * str)
{
	while(*str)					//如果不是一个空字符
	{
		*str = toupper(*str);	//返回大写
		str++;
	}
}

int PunctCount(const char * str)
{
	int ct = 0;
	while(*str)		//如果不是一个空字符
	{
		if(ispunct(*str))	//如果是标点符号返回真
			ct++;	//标点符号计数 
		str++;		//递增地址 
	}
	return ct;
}
