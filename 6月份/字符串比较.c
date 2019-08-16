#include <stdio.h>
#include <string.h>
#define SIZE 80
#define LIM 10
#define STOP "quit"
char * s_gets( char *st, int n );					//声明一个函数，告诉其具体的类型

int main ( void )
{
	char input[LIM][SIZE];							//声明定义一个二维数组
	int ct = 0;										//声明一个整数ct = 0
	printf("输入到%d行（为quit 则停止）\n",LIM );	//输出LIM的值 = 10
	while ( ct < LIM && s_gets(input[ct], SIZE ) != NULL &&
	        strcmp(input[ct], STOP ) != 0 )			//循环条件 变量ct = 0  如果它小于 10  且 调用函数返回值不为NULL  且 对比两个字符串不相等 则进入循环
	{
		ct++;
	}
	printf( "%d 字符串输入\n", ct );  				//如果输入的字符串相等 或 输入了10次字符串都不相等 都会执行到此处
	return 0;
}
char * s_gets( char * st, int n )					//定义一个函数
{
	char * ret_val;									//声明定义一个指针变量
	int i = 0;										//声明定义整数i = 0
	ret_val = fgets( st, n, stdin );				//获取字符串到st数组中，限制输入80 - 1字符 ，从键盘获取
	if ( ret_val )									//如果ret_val不等于NULL
	{
		while ( st[i] != '\n' && st[i] != '\0' )	//循环条件数组元素不等于换行符也不等于空字符
			i++;
		if ( st[i] == '\n' )  						//条件如果遇到换行符则替换成空字符
			st[i] = '\0';
		else
			while( getchar() != '\n' )				
													//如果遇到空字符 则 获取和丢弃字符
				continue;
	}
	return ret_val;
}
