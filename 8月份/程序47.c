#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	FILE *fp;
	int ch;
	char fname[50];
	printf("给文件起一个名字:");
	scanf("%s", fname);
	strncat(fname, ".txt", 4);
	fp = fopen(fname, "w");
	if(fp == NULL)
		exit(1);

	if(getchar() == '\n')//清空缓冲区scanf残余的换行符
		ch = '\0';
	while((ch = getchar()) != '#')
		fputc(ch, fp);
	fclose(fp);
	return 0;
}

