#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#define CNTL_Z '\032'
#define SLEN 81
int main(void)
{
	char file[SLEN];
	char ch;
	FILE * fp;
	long count, last;

	puts("Enter the name of the file to be processed:");	//输入要处理的文件的名称

//	scanf("%80s", file);
	strncpy(file, "temp.txt", sizeof("temp.txt"));	//拷贝指定字节大小的字符串给file，sizeof可以获取字符串字面量的大小，而一个指针的大小固定是8(64位环境) 
	printf("file = %s\n", file);
	if((fp = fopen(file, "rb")) == NULL)
	{
		printf("reverse can't open %s\n", file);	//反向打不开
		exit(EXIT_FAILURE);
	}

	fseek(fp, 0L, SEEK_END);	//定位到文件末尾，偏移0字节
	last = ftell(fp);	//得到文件位置指示器的当前位置
	for(count = 1L; count < last; count++)
	{
		fseek(fp, -count, SEEK_END);	/* 回退 */
		ch = getc(fp);	//从fp文件输入流获取字符
		if(ch != CNTL_Z && ch != '\r')/* MS-DOS 文件*/
			putchar(ch);
	}
	putchar('\n');
	fclose(fp);

	return 0;
}
