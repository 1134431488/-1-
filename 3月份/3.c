#include <stdio.h>
#include <stdlib.h>
#define CNTL_Z '\032'   /*DOS文本文件中的文件结尾标记*/
#define SLEN 81 //长度
int main(void)
{
	char file[SLEN];
	char ch;
	FILE *fp;
	long offset, last;
	puts("输入一个文件名字,无须带后缀。这个文件必须存在源代码目录");
	scanf("%80s", file);
	if((fp = fopen(file, "rb")) == NULL)
	{
		printf("文件以二进制只读打开失败\n请确认当前目录有没有这个文件%s\n", file);
		exit(EXIT_FAILURE);
	}
	fseek(fp, 0L, SEEK_END);/*定位到文件末尾*/
	last = ftell(fp);       /*返回文件位置指示器的当前位置*/
    for(offset = 1L; offset <= last; offset++)
    {
    	fseek(fp, -offset, SEEK_END);   /*从右至左回退*/
    	ch = getc(fp);
    	if(ch != CNTL_Z && ch != '\r')  /*MS-DOS文件*/
    	    putchar(ch);
	}
	putchar('\n');
	fclose(fp);
	
	return 0;
}

/*
fseek(fp, 0L, SEEK_SET);    //定位文件开始
fseek(fp, 10L, SEEK_SET);   //定位文件开始向右偏移10字节
fseek(fp, -10L, SEEK_SET);  //定位文件开始向左偏移10字节
fseek(fp, 2L, SEEK_CUR);    //定位文件当前位置向右偏移2字节
fseek(fp, -2L, SEEK_CUR);   //定位文件当前位置向左偏移2字节
fseek(fp, 0L, SEEK_END);    //定位文件末尾
fseek(fp, -10L, SEEK_END);  //定位文件末尾向左偏移10字节
*/
