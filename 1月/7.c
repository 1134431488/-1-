#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	fp = fopen("文本.txt", "r+");//事先打开一个不存在的文件
	if(getc(fp) == EOF)//读取看看否能读取到EOF
	{
		printf("读取不存在的文件，第一个字符返回EOF\n");
	}
	if(getc(NULL) == EOF)
	{
		printf("getc直接读取NULL竟然返回了EOF!\n");
		//细节处理
		fclose(fp);
		exit(EXIT_FAILURE);
	}
	printf("未读取到EOF\n");

	fclose(fp);
	return 0;
}
