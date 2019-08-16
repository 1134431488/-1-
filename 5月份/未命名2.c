#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE * fp;
	int ch;
	long fstart, current;
	if((fp = fopen("temp.txt", "r")) == NULL)
		fprintf(stderr, "%s\n", "打开temp文件失败！"), exit(EXIT_FAILURE);
	
	fstart = ftell(fp);
	printf("文件的第一个字节的位置:%ld\n", fstart);	//输出file start
	printf("文件%ld位置的字符是%c\n", fstart, fgetc(fp)); 
	current = ftell(fp);
	printf("获取了一个字符了，文件的位置发生了改变，现在的位置是:%ld\n", current);
	fseek(fp, 0L, SEEK_END);
	current = ftell(fp);
	ch = fgetc(fp);
	printf("现在移动到文件末尾%ld的位置，获取到的字符是%c\n", current, ch);
	current = ftell(fp);
	printf("末尾一般是空字符，所以你看不见这玩意是啥，我们回退一下。\n来到倒数第二的位置处，看看输出什么？\n");
	current = fseek(fp, -1L, SEEK_END);
	ch = getc(fp);
	printf("倒数第二字符位置%ld,获取到的字符是%c\n", current, ch); 
	for(long n = 1; n < 86; n++)
	{
		fseek(fp, -n, SEEK_END);
		printf("%d\n", ftell(fp));
		ch = fgetc(fp);
		fputc(ch, fp);
	}
	fclose(fp);
	return 0;
}
