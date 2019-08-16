#include <stdio.h>
#include <stdlib.h>
extern int KKK(void);

static int x = 666;
int a = 888; //同一程序的其他文件都可以使用这个变量，包括本源文件。
int main(int argc, char *argv[])
{
	printf("a=%d x=%d\n", a, x);
	KKK();  //调用同一程序的其他翻译单元的外部函数
	return 0;
}
