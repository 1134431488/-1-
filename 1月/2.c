#include <stdio.h>  //standard high - level I/O 标准高级，C库标准包
#include <stdlib.h> //提供exit()原型

int main(int argc, char *argv[])
{
	int ch;     //读取文件储存每个字符的地方
	FILE *fp;   //文件指针，派生类型
	unsigned long count = 0;

	if(argc != 2)
	{
		printf("文件名：%s\n", argv[0]);
		printf("缺乏第二个参数\n");
		exit(EXIT_FAILURE);
	}
	if((fp = fopen(argv[1], "r")) == NULL)
	{
		printf("只读方式打开文件失败\n");
		exit(EXIT_FAILURE);
	}
	while((ch = getc(fp)) != EOF)	//从fp文件指针获取字符，读到文件末尾(EOF)则退出循环，否则执行循环
	{
		putc(ch, stdout);   //与putchar(ch); 相同，把信息从程序发送到屏幕
		count++;    //计算字符的数量
	}
	fclose(fp);
	printf("文件的名字：%s， 文件的字符数：%d\n", argv[1], count);

	return 0;
}
