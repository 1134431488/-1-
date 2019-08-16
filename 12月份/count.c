#include <stdio.h>
#include <stdlib.h>
//用法：在CMD中输入完整路径，打开此文件编译的exe文件，按下空格后再输入第二个字符串，
//第二个字符串输入你要打开的文件，可以读取文件的信息，并计算字数
int main(int argc, char * argv [])  //windows用户需要打开命令行提示窗口运行该程序
{
	int ch;         //读取文件时，储存文件信息（每个字符的）地方
	FILE *fp;       //文件类型指针变量fp
	unsigned long count = 0;        //无符号长整数变量

	if(2 != argc)   //判断形参
	{
		printf("Usage: %s filename\n", argv[0]);//输出一下argv的首元素
		exit(EXIT_FAILURE); //程序异常终止
	}
	if(NULL == (fp = fopen(argv[1], "r")))      //以只读的形式打开argv第二个元素字符串, fopen没有打开成功则返回空指针
	{
		printf("Can't open %s\n", argv[1]); //输出这个文件名，也就是DOS获取的第二个字符串
		exit(EXIT_FAILURE);
	}
	while(EOF != (ch = getc(fp)))   //从fp指针获取的字符给整数型ch（以ASCII 10进制方式），ch为EOF即为文件末尾，ch为0则假
	{
		putc(ch, stdout);//与putchar(ch)；相同，第二个参数是指把ch信息以字符形式输出（stdout）到电脑屏幕上
		count++;
	}

	fclose(fp);//打开一个文件就必须关闭它，与fopen对应的关闭函数。参数是fopen返回的文件指针
	printf("File %s has %lu characters\n", argv[1], count);//输出第二个参数，以及字符串个数

	return 0;
}
