#include <stdio.h>
#include <stdlib.h>
#define CNTL_Z '\032'   /*DOS文本文件中的文件结尾标记*/
#define SLEN 81
int main(void)
{
	char file[SLEN];
	char ch;
	FILE *fp;
	long count, last;

	puts("Enter the name of the file to be processed:");   //输入要处理的文件的名称
	scanf("%80s", file);
	if((fp = fopen(file, "rb")) == NULL)
	{
		printf("reverse can't open %s\n", file);    //反向打不开
		exit(EXIT_FAILURE);
	}
	fseek(fp, 0L, SEEK_END);
	last = ftell(fp);
	for(count = 1L; count <= last; count++)
	{
		fseek(fp, -count, SEEK_END);
		ch = getc(fp);
		if(ch != CNTL_Z && ch != '\r')
			putchar(ch);
	}
	putchar('\n');
	fclose(fp);
	return 0;
}
