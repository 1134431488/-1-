#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	FILE *fp;
	int ch;
	char fname[50];
	printf("���ļ���һ������:");
	scanf("%s", fname);
	strncat(fname, ".txt", 4);
	fp = fopen(fname, "w");
	if(fp == NULL)
		exit(1);

	if(getchar() == '\n')//��ջ�����scanf����Ļ��з�
		ch = '\0';
	while((ch = getchar()) != '#')
		fputc(ch, fp);
	fclose(fp);
	return 0;
}

