#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LIMIT 81
void ToUpper(char *);
int PunctCount(const char *);

int main(void)
{
	char line[LIMIT];//81 
	char * find;

	puts("Please enter a line:");
	fgets(line, LIMIT, stdin);//获取字符串给line数组 
	
	find = strchr(line, '\n');//从line中获取'\n'并设为空字符 
	if(find != NULL)
		*find = '\0';
		
	ToUpper(line);//返回大写 
	puts(line);//输出这个大写
	printf("That line has %d punctuation characters.\n", PunctCount(line));

	return 0;
}
void ToUpper(char * str)//str指针指向数组 
{
	while(*str)//取单个元素 
	{
		*str = toupper(*str);//如果是小写字符就返回大写 
		str++;//递增地址 
	}
}
int PunctCount(const char *str)
{
	int ct = 0;
	while(*str)
	{
		if(ispunct(*str))//如果是标点符号字符就为真
			ct++;//开始记录标点符号数量
		str++;//递增其地址
	}
	return 0;
}
