#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41

int main(void)
{
	FILE *fp;
	char words[MAX];

	if((fp = fopen("wordy", "a+")) == NULL) //文本模式打开文件，"a+"在文件末尾追加文本内容
	{
		fprintf(stdout, "Can't open \"wordy\" file.\n"); //输出字符串到显示屏"无法打开\"wordy\"文件"
		exit(EXIT_FAILURE); //异常结束
	}

	puts("Enter words to add to the file; press the #"); //输入要添加到文件中的单词;按#
	puts("key at the beginning of a line to terminate."); //键入要终止的行开头的键
	while((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#')) //从键盘流获取字符到words，按#结束
		fprintf(fp, "%s\n", words); //输出words字符串到文件

	puts("File contents:"); //文件内容
	rewind(fp); /*返回到文件开始处*/
	while(fscanf(fp, "%s", words) == 1) //从文件获取字符串到words字符类型数组
		puts(words); //输出words字符串到显示屏

	puts("Done!");
	if(fclose(fp) != 0)
		fprintf(stderr, "Error closing file\n");
	remove("wordy"); //删除目录内的文件
	return 0;
}
