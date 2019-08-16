#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 40

int main(int argc, char *argv [])
{
	FILE *in, *out;
	int ch;
	char name[LEN];
	int count = 0;

	if(argc < 2)
	{
		fprintf(stderr, "错误0 %s \n", argv[0]);    //命令行获取字符串小于2个则退出
		exit(EXIT_FAILURE);
	}
	if((in = fopen(argv[1], "r") ) == NULL) //打开命令行输入的第二个字符串文件，若文件不存在则退出
	{
		fprintf(stderr, "错误1 %s", argv[1]);
		exit(EXIT_FAILURE);
	}
	strncpy(name, argv[1], LEN - 5);    //拷贝文件名
	name[LEN -5] = '\0';    //文件名末尾+空字符
	strcat(name, ".red");   //name = argv[1] + ".red"
	if((out = fopen(name, "w")) == NULL)
	{
		fprintf(stderr, "当文件不存在，以w模式会新建文件，但失败了！\n");
		fprintf(stderr, "可能内存空间不够的原因！\n");
		exit(3);//以非0值表示异常失败
	}
	while((ch = getc(in)) != EOF)   //从argv[1]文件获取字符信息
	{
		if(count++ % 3 == 0) //当没有余数的时候，count从0开始尾递增0/3,3/3,6/3,9/3......
		{
			putc(ch, out);  //输出到out文件指针指向的文件，可能会经过缓冲区
		}
	}
	if(fclose(in) != 0 || fclose(out) != 0) //为0则正常结束，为EOF则异常失败结束
	{
		fprintf(stderr, "文件fclose结束失败！\n");
	}
	return 0;
}
