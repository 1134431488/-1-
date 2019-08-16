#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	char ch;
	FILE * fp;	//FILE结构类型的指针fp
	if((fp = fopen("temp.txt", "a+")) == NULL)
	{
		puts("cant open");
		exit(EXIT_FAILURE);
	}
	int count;
	long last;
	fseek(fp, 0L, SEEK_END);	//定位到文件结尾
	last = ftell(fp);	//获取文件末尾的位置，相当于文件字节数
	char str[10] = {[0] = '\0'};
	printf("last = %ld\n", last);
	if(last == 0L)
	{
		puts("输入1-10个字母进行逆向排序。");
		fgets(str, 10, stdin);
		*(strchr(str, '\n')) = '\0';	//把其整体看作一个地址来用，取值改空字符
		while(getchar() != '\n')
			continue;
	}
	fputs(str, fp);
	fseek(fp, 0L, SEEK_END);
	last = ftell(fp);
	if(str[0] != '\0')
		printf("str = %s  last = %ld\n", str, last);
	else
		printf("last = %ld\n", last);
	for(count = 1; count <= last; count++)	// last是最后一位字符，因为文件内的字符串和字符串不同，最后一位字符可能不是空字符。
	{
		//最后一位字符位置减去1才是有效的字符部分。
		fseek(fp, -count, SEEK_END);	// 定位到文件结尾
		ch = getc(fp);
		printf("%c", ch);
	}
	fclose(fp);
	return 0;
}
