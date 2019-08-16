#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 40

int main(int argc , char * argv[])
{
	FILE *in, *out;	//声明两个指向FILE的指针
	int ch;
	char name[LEN];	//储存输出文件名
	int count = 0;

	//检查命令参数
	if(argc < 2)	//argc是用户在cmd窗口敲的字符串参数数量，最小数量是1开始 
	{
		fprintf(stderr, "Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);

	}
	//设置输入
	if((in = fopen(argv[1], "r")) == NULL)	//使用argv数组的第二个元素 
	{
		fprintf(stderr, "I couldn't open the file\"%s\"\n",	//我无法打开文件%s\ n
		        argv[1]);
		exit(EXIT_FAILURE);	//程序异常终止 
	}
	//设置输出
	strncpy(name, argv[1], LEN - 5);	//拷贝文件名，不包含空字符
	name[LEN - 5] = '\0';
	strcat(name, ".red");	//在文件名后添加.red
	if((out = fopen(name, "w")) == NULL)
	{
		fprintf(stderr, "Can't create output file.\n");	//无法创建输出文件。
		exit(3);
	}
	//拷贝数据
	while((ch = getc(in)) != EOF)
		if(count++ % 3 == 0)
			putc(ch, out);	//打印3字符的第一个字符到文件
	//收尾工作
	if(fclose(in) != 0 || fclose(out) != 0)
		fprintf(stderr, "Error in closing files\n");

	return 0;
}
