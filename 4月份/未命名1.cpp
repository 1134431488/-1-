#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTITL 40
#define MAXBKS	10
char * s_gets(char st, int n);	//函数声明 
char * s_gets(char st, int n)	//函数定义
{
	char * ret_val;
	char * find;
	ret_val = fgets(st, n, stdin);	//从标准输入流（键盘）获取数据
	printf("ret_val = %s\n", ret_val);
	if(ret_val != NULL)
	{
		find = strchr(st, '\n');	//待查找文本， 查找的字符
		if(find != NULL)
			*find = '\0';
		else
			while(getc(stdin) != '\0')	//输入流(缓冲区)中获取字符，并舍去(没有接收getc()函数的返回值)
				continue;
	}
	return ret_val;
}

struct book {
	char title[MAXTITL];	
};

int main(void)
{
	struct book library[MAXBKS];	/* 结构数组 */
	int count = 0;
	int index, filename;
	FILE * fp;
	int size = sizeof(struct book);	/* 得到结构体类型大小，用作读写文件函数的参数 */
	
	if((fp = fopen("books.dat", "a+b")) == NULL)
		fputs("打开文件失败！\n", stderr), exit(1);
	rewind(fp);	/* 文件位置指示器移动到文件开始字节 0字节的位置 */
//	fseek(fp, 0L, SEEK_SET);	//同上语句  469页  
	return 0;
}
