/*为了演示目标空间装不下源字符串副本会发生什么情况*/
#include <stdio.h>
#include <string.h>
#define SIZE 40
#define TARGSIZE 7
#define LIM 5
char * s_gets(char *st, int n);

int main(void)
{
	char qwords[LIM][TARGSIZE];//5行7列
	char temp[SIZE];//40列
	int i = 0;
	//代码的含义是，当你输入过长的 字符串的时候，多余的部分就舍去了 
	printf("Enter %d words beginning with q:\n", LIM);
	while(i < LIM && s_gets(temp, SIZE))//循环5次改变i的值 and 获取字符串到temp当中
	{
		if(temp[0] != 'q')//假设数组temp的第0位元素不是q，那么这个字符串我们直接输出，i不进行递增
			printf("%s doesn't begin with q!\n", temp);
		else//如果这个数组temp的第一个元素就是q，那么执行下面括号语句
		{
			strncpy(qwords[i], temp, TARGSIZE - 1);//拷贝函数带n版本(qwords第i行地址，带q开头的temp数组，7-1)这里的7-1的意思是0~6位有效元素
			//strncpy的参数3的意思是从temp拷贝含空字符的指定字符到qwords[i]当中
			qwords[i][TARGSIZE - 1] = '\0';//qwords第i行，第7-1即下标为6元素是7的字符设置为空字符，前6字符有效
			i++;//进行i的递增
		}
	}
	puts("Here are the words accepted:");
	for(i = 0; i < LIM; i++)//输出这个字符串数组，5行
		puts(qwords[i]); 

	return 0;
}
char *s_gets(char *st, int n)
{
	char * ret_val;
	int i = 0;
	ret_val = fgets(st, n, stdin);
	if(ret_val)
	{
		while(st[i] != '\n' && st[i] != '\0')
			i++;
		if(st[i] == '\n')
			st[i] = '\0';
		else
			while(getchar() != '\n')
				continue;
	}
	return ret_val;
}
