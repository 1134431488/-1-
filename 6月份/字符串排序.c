#include <stdio.h>
#include <string.h>
#define SIZE 81
#define LIM 20
#define HALT ""
void stsrt( char *strings [], int num );
char *s_gets( char *st, int n );

int main(void)
{
	char input[LIM][SIZE];//20行81列
	char *ptstr[LIM];//20行
	int ct = 0;
	int k;
	/*****************************************************************************************/
	printf("获取字符串给二维数组input，假设行首是空字符则不进行获取\n最多获取20行的数据\n");
	//     ct < 20  and  获取的字符串给input的每一行    and 获取的字符串当前行的首元素不为0
	while( ct < LIM && s_gets( input[ct], SIZE ) != NULL && input[ct][0] != '\0')
	{
		ptstr[ct] = input[ct];//同时让指针去指向这个数组的有效字符串，这句挺关键的 
		ct++;
	}
	/*****************************************************************************************/
	printf("你输入了%d行的字符串\n", ct); 
	stsrt(ptstr, ct);
	puts("\n");
	for( k = 0; k < ct; k++ )
		puts( ptstr[k] );
	return 0;
}

void stsrt( char *strings[], int num )//接收指向字符串的指针和记录的获取次数num，num又可以看做是有几行字符串 
{
	char *temp;//一个指针 
	int top, seek;//两个整数 

	for( top = 0; top < num - 1; top++ )//0 < 字符串行数 
		for( seek = top + 1; seek < num; seek++ )
			if( strcmp( strings[top], strings[seek] ) > 0 )//非常关键的一句，左值大于右值返回1，小于返回-1，等于返回0 
			{//如果左值大于右值则满足条件，那么互换左右值 
				temp = strings[top];//记录这个左值 
				strings[top] = strings[seek];//把右值赋值给这个左值 
				strings[seek] = temp;//把记录的右值赋值给左值 
			}
}
char *s_gets(char *st, int n)
{
	char *ret_val;
	int i = 0;
	char *find;
	ret_val = fgets(st, n, stdin);//获取的是有效的字符串才返回一个有效的地址
	if(ret_val)
	{
		find = strchr(st, '\n');//获取这个换行符的地址
		if(find)//如果找到则不返回null
			*find = '\0';//替换成空字符
	}
	return ret_val;
}
