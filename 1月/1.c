#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 40
int main(int argc, char * argv[])
{
	FILE *int, *out;    //声明派生类型文件指针，包含缓冲区信息
	int ch; //记录EOF或字符
	char name[LEN];     //文件名存储
	int count = 0;
	
	//检查命令行参数
	if(argc < 2)
	{
		fprintf(stderr, "参数缺少，文件名： %s\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	//设置输入
	if((in = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "我打不开文件 %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	//设置输出
	strncpy(name, argv[1], LEN - 5);    //拷贝文件名
	name[LEN - 5] = '\0';
	strcat(name, ".red");   //在文件名后添加.red
}
