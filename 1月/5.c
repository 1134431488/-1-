#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
//	/*使用getchar和putchar来进行标准的输入和输出*/
//	int ch;
//	while((ch = getchar()) != '\n')
//	{
//		putchar(ch);
//	}
//	putchar('\n');  //putchar的参数是字符，而不是字符串

//	/*利用fgetc和fputc来进行标准输入输出*/
//	int ch2;
//	while((ch2 = fgetc(stdin)) != '\n')
//	{
//		fputc(ch2, stdout); //参数1字符，参数2指针
//	}
//	fputc('\n', stdout);

	FILE *fp;
	//打开或创建一个文件，写文件
	fp = fopen("new.txt", "w+");
	if(fp != NULL)
	{
		int ch2;//快内变量
		while((ch2 = fgetc(stdin)) != '\n')
		{
			fputc(ch2, fp);//参数1字符，程序输出缓冲区到到文件
		}
		fputc('\n', fp);
	}
	else
	{
		printf("open file failed!\n");
	}
	int file_close_result = fclose(fp);
	if(file_close_result == 0)
	{
		printf("colse success\n");
	}
	else
		printf("colse failure\n");
	return 0;
}
