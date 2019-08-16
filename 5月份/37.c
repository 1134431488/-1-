#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 4096
#define SLEN 81
void append(FILE * source, FILE * dest);
char * s_gets(char * st, int n);

int main(void)
{
	FILE * fa, * fs;	//fa指向目标文件， fs指向源文件
	int files = 0;	//附加的文件数量
	char file_app[SLEN];	//目标文件	destination
	char file_src[SLEN];	//源文件名	source
	int ch;

	puts("输入目标文件名称:");
	s_gets(file_app, SLEN);
	if((fa = fopen(file_app, "a+")) == NULL)
		fprintf(stderr, "不能打开 %s\n", file_app), exit(EXIT_FAILURE);
	if(setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)	//创建一个指定大小的完全模式的缓冲区给fa
		fputs("无法创建输出缓冲区\n", stderr), exit(EXIT_FAILURE);
	puts("输入第一个源文件的名称(空行退出):");
	while(s_gets(file_src, SLEN) && file_src[0] != '\0')
	{
		if(strcmp(file_src, file_app) == 0)	//比较文件名，如果两者相等strcmp返回0
			fputs("不能将文件附加到自身\n", stderr);
		else if((fs = fopen(file_src, "r")) == NULL)
			fprintf(stderr, "无法打开 %s\n", file_src);
		else
		{
			if(setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)	//创建一个指定大小的完全缓冲区给fs
			{
				fputs("无法创建输入缓冲区\n", stderr);
				continue;	//跳到下一次循环迭代
			}
			append(fs, fa);	//传入fs和fa文件流
			if(ferror(fs) != 0)	//文件读写错误,当读或写出现错误，ferror()函数返回一个非0值
				fprintf(stderr, "读取文件错误 %s.\n", file_src);
			if(ferror(fa) != 0)	//文件未结束
				fprintf(stderr, "写入文件错误 %s.\n", file_app);
			fclose(fs);
			files++;
			printf("正在附加 %s 文件.\n", file_src);
			puts("Next file (empty line to quit):");
		}
	}
	printf("添加完成。%d附加的文件。\n", files);
	rewind(fa);	//回到文件开头
	printf("%s 内容:\n", file_app);
	while((ch = getc(fa)) != EOF)
		putchar(ch);
	puts("显示完成。");
	fclose(fa);

	return 0;
}

void append(FILE * source, FILE * dest)
{
	size_t bytes;
	static char temp[BUFSIZE];	//只分配一次

	while((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)	//把source的内容读入程序，读入项数返回给bytes
		fwrite(temp, sizeof(char), bytes, dest);	//把temp的内容写入dest文件中，输出到文件的项数和输入到程序的项数一样
}

char * s_gets(char * st, int n)
{
	char * ret_val, * find;
	ret_val = fgets(st, n, stdin);
	if(ret_val != NULL)
	{
		find = strchr(st, '\n');	//查找换行符
		if(find != NULL)
			*find = '\0';
		else
			while(getchar() != '\n')
				continue;
	}
	return ret_val;
}
