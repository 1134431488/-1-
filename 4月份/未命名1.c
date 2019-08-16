#include<stdio.h>
#include<string.h>/*为strlen()提供原型*/
#define NAME "GIGATHINK, INC."//15字符 
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis,CA 94904"
#define WIDTH 40
#define SPACE ' '

void show_n_char(char ch, int num);

int main(void)
{
	int spaces;

	show_n_char('*',WIDTH);//40个*号 
	putchar('\n');//回车 
	show_n_char(SPACE, 12);//12个空格 
	printf("%s\n",NAME);
	spaces = (WIDTH - strlen(ADDRESS)) / 2 ; /*计算要跳过多少个空格*/
//  spaces = (40 - 获取字宽(字符串)) / 2 
	         show_n_char(SPACE, spaces);/*用一个变量作为参数*/
	printf("%s\n",ADDRESS);
	show_n_char(SPACE,(WIDTH - strlen(PLACE)) / 2);

	printf("%s\n",PLACE);
	show_n_char('*',WIDTH);//40个*号 
	putchar('\n');

	return 0;
}
/*show_n_char()函数定义*/
void show_n_char(char ch, int num)
{
	int count;
	for(count = 1; count <= num; count++)
		putchar(ch);
}
