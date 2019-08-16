#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE *fp;
	char ch;
	int n;
	if((fp = fopen("a.txt", "r")) == NULL)	//a.txt文件内容只有"123"
		fputs("打开文件失败！", stderr), exit(EXIT_FAILURE);
//
//	while((ch = getc(fp)) != EOF)
//		putc(ch, stdout);
//	puts("");

//	while(n++ < 4)
//	{
//		if((ch = getc(fp)) != EOF)
//			putc(ch, stdout);
//	}

//	fseek(fp, 0L, SEEK_END);
//	long a = ftell(fp);
//	printf("\n文件现在的位置:%d\n", a);	//结果是3
//	printf("返回值:%d = feof()\n", feof(fp)); 
	if(feof(fp) != 0)
		puts("到达文件结尾！");
	else
		puts("未达到文件结尾！");
	fclose(fp);
	return 0;
}
