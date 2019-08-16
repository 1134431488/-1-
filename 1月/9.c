#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *in, *out, *et_1, *et_2;
	int ch_1, ch_2, count = 0;
	char *name_1, *name_2, *encrypt_1, *encrypt_2;  //2个文件名
	name_1 = "C:\\Users\\lenovo\\Desktop\\C语言源码\\1月\\源文件.txt";
	name_2 = "C:\\Users\\lenovo\\Desktop\\C语言源码\\1月\\解密文件.txt";
	encrypt_1 = "C:\\Users\\lenovo\\Desktop\\C语言源码\\1月\\加密文本1.txt";
	encrypt_2 = "C:\\Users\\lenovo\\Desktop\\C语言源码\\1月\\加密文本2.txt";


	if((in = fopen(name_1, "r")) == NULL)//读模式打开文件
	{
		fprintf(stderr, "错误0！\n");
		exit(EXIT_FAILURE);
	}
	if((out = fopen(name_2, "w+")) == NULL)//写模式打开文件
	{
		fprintf(stderr, "错误1！\n");
		exit(EXIT_FAILURE);
	}
	if((et_1 = fopen(encrypt_1, "w+")) == NULL)//读写(更新)模式打开文件
	{
		fprintf(stderr, "加密1错误\n");
		exit(EXIT_FAILURE);
	}
	if((et_2 = fopen(encrypt_2, "w+")) == NULL)//读写(更新)模式打开文件
	{
		fprintf(stderr, "加密2错误\n");
		exit(EXIT_FAILURE);
	}
	//开始输出加密文本
	while((ch_1 = getc(in)) != EOF)//从源文件.txt获取信息
		if(count++ % 3 == 0)     //每3个字符的第一个字符输出到加密文本1
			putc(ch_1, et_1);
		else
			putc(ch_1, et_2);      //每3个字符的第一个字符以外的字符输出到加密文本2
	//开始输出解密文本
		count = 0;  //初始化
		while((ch_1 = getc(et_1)) != EOF && (ch_2 = getc(et_1)) != EOF)//从源文件.txt获取信息
		if(count++ % 3 == 0)     //每3个字符的第一个字符输出到解密文件.txt
			putc(ch_1, out);
		else
			putc(ch_2, out);      //每3个字符的第一个字符以外的字符输出到解密文件.txt
	puts("运行成功！\n");
	fprintf(stdout, "in=%d out=%d et_1=%d et_2=%d\n", fclose(in), fclose(out), fclose(et_1), fclose(et_2) );    //关闭文件

	return 0;
}
