#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41
int main(void)
{
	fprintf(stdout, "%s\n", "功名爵禄尽迷津，");
	fprintf(stdout, "%s\n", "贝叶菩提不受尘。");
	fprintf(stdout, "%s\n", "久住青山无白眼，");
	fprintf(stdout, "%s\n", "巢禽穴兽四时驯。");

	FILE * fp;
	char words[MAX];

	if((fp = fopen("wordy", "a+")) == NULL)//打开wordy文件，可读写，在文件末尾添加信息
	{
		fprintf(stdout, "不能打开\"wordy\"文件.\n");
		exit(EXIT_FAILURE);
	}
	puts("输入要添加到文件中的单词;按#");
	puts("键入要终止的行开头的键。");
	while((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#')) //从键盘获取信息到words char数组
		fprintf(fp, "%s\n", words); //把words的内容输出到fp文件指针
	puts("文件内容:");
	rewind(fp); /*返回到文件开始处*/
	while(fscanf(fp, "%s", words) == 1) //从文件开始处获取信息给words数组
		puts(words);    //输出这个获取到的信息
	puts("Done!");
	if(fclose(fp) != 0)
		fprintf(stderr, "Error closing file\n");

	return 0;
}
